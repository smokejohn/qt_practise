#ifndef COMBOBOX_H
#define COMBOBOX_H

#include <QComboBox>
#include <QLabel>


class ComboBoxEx : public QWidget {

    public:
        ComboBoxEx(QWidget *parent = 0);

    private:
        QComboBox *combo;
        QLabel *label;
};

#endif //COMBOBOX_H
