#!/usr/bin/python3
""" Displays all cities of a given state """

import MySQLdb
from sys import argv

if __name__ == "__main__":
    db = MySQLdb.connect(host="localhost", port=3306, user=argv[1],
                         passwd=argv[2], db=argv[3], charset="utf8")
    cur = db.cursor()
    cur.execute("SELECT cities.name FROM cities INNER JOIN states \
                 ON cities.state_id = states.id \
                 WHERE states.name = %s ORDER BY cities.id", (argv[4],))
    print(", ".join(row[0] for row in cur.fetchall()))

    cur.close()
    db.close()
