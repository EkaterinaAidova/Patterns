from abc import ABCMeta, abstractmethod


class Iterator(metaclass=ABCMeta):

    _error = None

    def __init__(self, collection, cursor):
        self._collection = collection
        self._cursor = cursor

    @abstractmethod
    def current(self):
        pass

    @abstractmethod
    def next(self):
        pass

    @abstractmethod
    def has_next(self):
        pass

    @abstractmethod
    def remove(self):
        pass

    def _raise_key_exception(self):
        raise self._error('Collection of class {} does not have key "{}"'.format(
            self.__class__.__name__, self._cursor))

class NullIterator(Iterator):
    def current(self):
        return None

    def next(self):
        return None

    def has_next(self):
        return False

    def remove(self):
        return  None



class ListIterator(Iterator):

    _error = IndexError

    def __init__(self, collection: list):
        super().__init__(collection, 0)

    def current(self):
        if self._cursor < len(self._collection):
            return self._collection[self._cursor]
        self._raise_key_exception()

    def next(self):
        if len(self._collection) >= self._cursor + 1:
            self._cursor += 1
            return self._collection[self._cursor]
        self._raise_key_exception()

    def has_next(self):
        return len(self._collection) >= self._cursor + 1

    def remove(self):
        if 0 <= self._cursor < len(self._collection):
            self._collection.remove(self._collection[self._cursor])
        else:
            self._raise_key_exception()