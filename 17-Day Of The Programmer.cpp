bool isLeap(int year) {
    if (year % 4 != 0)
        return false;
    if (year > 1918 && year % 100 == 0 && year % 400 != 0)
        return false;
    return true;
}

// Complete the dayOfProgrammer function below.
string dayOfProgrammer(int year) {

    if (year == 1918)
        return "26.09.1918";
    else if (isLeap(year))
        return ("12.09." + to_string(year));
    else
        return ("13.09." + to_string(year));
}
