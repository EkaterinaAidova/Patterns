import datetime

import  messagehandler as mh

class MessageSorter:
    def __init__(self):
        self.__handler = mh.SpamHandler(0, mh.ComplaintHandler(1, mh.SuggestionHandler(2, mh.GratitudeHandler(3, mh.NoHandler(4)))))
        self._priority_list = ['spam', 'complaint', 'suggestion', 'gratitude']
        self.__history = [str]

    def sendMessage(self, tp: str, msg: str):
        if tp in self._priority_list:
            status = self.__handler.handle_message(msg, self._priority_list.index(tp))
        else: status = "no action"
        self.__history.append(str(str(datetime.datetime.now())+": type: "+ tp + " | message: "+ msg + " | status: "+ status))

    def history(self):
        for mail in self.__history:
            print(mail)
