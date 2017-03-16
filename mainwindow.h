#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    explicit MainWindow(QWidget *parent = 0);
        void set_penampungan_str(QString x);
    QString get_penampungan_text();
    int get_flag();
    float get_temp();
    float get_angka();
    void set_null_penampungan_text();

    ~MainWindow();

private slots:
    void on_satu_clicked();
     void on_dua_clicked();

     void on_tiga_clicked();

     void on_enam_clicked();

     void on_lima_clicked();

     void on_empat_clicked();

     void on_sembilan_clicked();

     void on_delapan_clicked();

     void on_tujuh_clicked();
     /*kita beri flag, jika + = 1, - = 2 , / = 3 , * = 4 */

     void on_pushButton_14_clicked();

     void on_pushButton_10_clicked();

     void on_pushButton_11_clicked();

     void on_pushButton_13_clicked();

     void on_pushButton_12_clicked();

     void on_sikat_clicked();

     void on_hapus_clicked();

private:
    Ui::MainWindow *ui;
    QString *conv_display;
    float angka1; //ketika tombol + - / * dipencet akan di pass ke temp
    float temp;
    QString penampungan_to_text="\0";
    int flag;


};

#endif // MAINWINDOW_H
