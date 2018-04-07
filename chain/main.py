import sortingsystem as srt
def main():
    sorter = srt.MessageSorter()
    sorter.sendMessage(tp="spam",  msg="hello")
    sorter.sendMessage(tp="gratitude", msg="thanks a lot")
    sorter.sendMessage(tp="complaint", msg="game is awful")
    sorter.sendMessage(tp="mail", msg="i love you, Bill")
    sorter.sendMessage(tp="suggestion", msg="need more levels!")
    print("\n\nhistory of operation")
    sorter.history()

main()


