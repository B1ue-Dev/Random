from PyQt5.QtGui import *
from PyQt5.QtWidgets import *
from PyQt5.QtCore import *

import sys


class MainWindows(QMainWindow):

    def __init__(self, *arg, **kwargs):
        super(MainWindows, self).__init__(*arg, **kwargs)

        self.setWindowTitle("This is Blue")
        button = QPushButton("Fuck me harder!")

        self.setFixedSize(QSize(500, 300))

        self.setCentralWidget(button)

gui = QApplication(sys.argv)

windows = MainWindows()
windows.show()



gui.exec_()

# Um, so this is my first attemp in creating a GUI app that based on PyQt5
