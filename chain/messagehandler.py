class MessageHandler:
    def __init__(self):
        self._priority = -1
        self._nxt = NoHandler(-1)

    @property
    def priority(self):
        return self._priority

    @priority.setter
    def priority(self, pr):
        self._priority = pr

    @property
    def nxt(self):
        return  self._nxt

    @nxt.setter
    def nxt(self, nxtm):
        self._nxt = nxtm

    def handle_message(self, msg : str, pr: int):
        status = "no action"
        if pr == self.priority:
            status = self.act(msg)
        else:
            if type(self.nxt) != NoHandler:
                status = self.nxt.handle_message(msg, pr)
        return status

    def act(self, msg: str):
        pass

class NoHandler(MessageHandler):
    def __init__(self, pr:int):
        self._priority = pr


class SpamHandler(MessageHandler):
    def __init__(self, pr: int, nxt: MessageHandler):
        self._priority = pr
        self._nxt = nxt

    def act(self, msg: str):
        print("Spam message:", msg, "was destroyed")
        return  "destroyed"

class ComplaintHandler(MessageHandler):
    def __init__(self, pr: int, nxt: MessageHandler):
        self._priority = pr
        self._nxt = nxt

    def act(self, msg: str):
        print("Complaint: ", msg, "was delivered into legal department")
        return "observed by lowyer"

class SuggestionHandler(MessageHandler):
    def __init__(self, pr: int, nxt: MessageHandler):
        self._priority = pr
        self._nxt = nxt

    def act(self, msg: str):
        print("Suggestion:", msg, "was delivered into develoment center")
        return "work in progress"

class GratitudeHandler(MessageHandler):
    def __init__(self, pr: int, nxt: MessageHandler):
        self._priority = pr
        self._nxt = nxt

    def act(self, msg: str):
        print("Gratitude:", msg, "was delivered to chief executive")
        return "readed by derector"
