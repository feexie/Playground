#!/usr/bin/python3
""" Lists all states with a name starting with N from the database """

import MySQLdb
from sys import argv

if __name__ == "__main__":
    db = MySQLdb.connect(host="localhost", port=3306, user=argv[1],
                         passwd=argv[2], db=argv[3], charset="utf8")
    cur = db.cursor()
    cur.execute("SELECT * FROM states WHERE BINARY name='{}' \
                 ORDER BY id".format(argv[4]))
    for row in cur.fetchall():
        print(row)
