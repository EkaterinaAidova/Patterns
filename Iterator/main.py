import  menu as mn
def main():
    pancakehouse_menu = mn.Menu("PANCAKE HOUSE MENU", "Pancakes")
    dinner_menu = mn.Menu("DINER MENU", "Lunch")
    cafe_menu = mn.Menu("CAFE MENU", "Dinner")
    dessert_menu = mn.Menu("DESSERT_MENU", "Desserts")
    allmenu = mn.Menu("ALL MENU", "all menus")

    allmenu.add(pancakehouse_menu)
    allmenu.add(dinner_menu)
    allmenu.add(cafe_menu)
    pancakehouse_menu.add(dessert_menu)
    dessert_menu.add(mn.MenuItem("sweet pancakes", "Pancakes with chocolate topping", True, 2.99 ))
    dessert_menu.add(mn.MenuItem("extra-sweet pancakes", "Pancakes with chocolate topping and chocolate", True, 3.50))
    pancakehouse_menu.add(mn.MenuItem("Breakfast", "Pancakes with scrambled eggs, and toast", True, 1.99))
    pancakehouse_menu.add(mn.MenuItem("Breakfast with sousiges", "Pancakes with scrambled eggs, and toast with sousige", True, 2.30))
    dessert_menu.add(mn.MenuItem("waffle", "Waffles, with your choice of blueberries or strawberries",True, 3.59))
    dinner_menu.add(mn.MenuItem("Vegetarian BLT", "(Fakin') Bacon with lettuce & tomato on whole wheat", True, 2.99))
    dinner_menu.add(mn.MenuItem("BLT", "Bacon with lettuce & tomato on whole wheat", True, 3.99 ))
    cafe_menu.add(mn.MenuItem("Veggie Burger and Air Fries","Veggie burger on a whole wheat bun, lettuce, tomato, and fries",True, 3.99))
    cafe_menu.add(mn.MenuItem("Soup of the day","A cup of the soup of the day, with a side salad", False, 3.69))

    waitress = mn.Waiter(allmenu)
    try: waitress.print_menu()
    except IndexError: pass
    try: waitress.print_veg_menu()
    except IndexError: pass

main()


