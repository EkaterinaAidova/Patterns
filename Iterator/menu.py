from abc import ABCMeta, abstractmethod
import Iterator as it

class MenuComponent:
    @abstractmethod
    def add(self, component):
        pass

    @abstractmethod
    def remove(self, component):
        pass

    @abstractmethod
    def get_child(self, i: int):
        pass

    @abstractmethod
    def get_name(self):
        pass

    @abstractmethod
    def get_price(self):
        pass
    @abstractmethod
    def is_vegetarian(self):
        pass

    @abstractmethod
    def get_description(self):
        pass

    @abstractmethod
    def get_iterator(self)-> it.Iterator :
        pass

    @abstractmethod
    def prints(self):
        pass

    def __iter__(self):
        return self


class MenuItem(MenuComponent):

    def __init__(self, name:str, desc: str, veg: bool, price: float):
        self._name = name
        self._description = desc
        self._vegitarian = veg
        self._price = price

    def get_name(self):
        return  self._name

    def get_price(self):
        return self._price

    def is_vegetarian(self):
        print(self._vegitarian)
        return self._vegitarian

    def get_description(self):
        return self._description

    def get_iterator(self):
        return  it.NullIterator()

    def prints(self):
        print(" ", self.get_name(), end="")
        if self.is_vegetarian():
             print("(v)", end="")

        print(" ,", self.get_price())
        print("    - ", self.get_description())

    def __iter__(self):
        return iter(self)


class Menu(MenuComponent):
    def __init__(self, name: str, descr: str):
        self.__submenu = [MenuComponent]
        self.iterator = None
        self.iterator = self.get_iterator()
        self._name = name
        self._description = descr

    def  add(self, component):
        self.__submenu.append(component)

    def remove(self, component):
        self.__submenu.remove(component)

    def get_child(self, i: int):
        self.__submenu[i]

    def get_name(self):
        return self._name

    def get_description(self):
        return self._description

    def get_iterator(self):
        if self.iterator == None:
            return it.ListIterator(self.__submenu)
        else :
            return self.iterator

    def prints(self):
        print("\n", self.get_name(), end=", ")
        print(self.get_description(), end="--------- ")
        it = self.get_iterator()
        while self.iterator.has_next():
            component = it.next()
            try: component.prints()
            except IndexError:
                break

    def print_veg(self):
        it = self.get_iterator()
        while self.iterator.has_next():
            component = it.next()
            try:
                if type(component) == MenuItem:
                    if component.is_vegetarian():
                         component.prints()
                else:
                    component.print_veg()
            except IndexError:
                break


    def get_price(self):
        pass

    def is_vegetarian(self):
        pass

    def __iter__(self):
        return iter(self)



class Waiter:
    def __init__(self, menu: MenuComponent):
        self.allmenu = menu

    def print_menu(self):
        self.allmenu.prints()

    def print_veg_menu(self):
        print("\nvegetarian menu:")
        it = self.allmenu.get_iterator()
        while it.has_next():
            component = it.next()
            if type(component) == MenuItem:
                if component.is_vegetarian():
                     component.prints()
            else: component.print_veg()
















