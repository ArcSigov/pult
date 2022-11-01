#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);



    ui->kvs1l->setStyleSheet("QPushButton{background: black;" "border: 1px solid white;}"
                             "QPushButton:hover{background: white;}");
    ui->kvs2l->setStyleSheet("QPushButton{background: no;" "border: 1px solid white;}"
                             "QPushButton:hover{background: white;}");
    ui->kvs3l->setStyleSheet("QPushButton{background: black;" "border: 1px solid white;}"
                             "QPushButton:hover{background: white;}");
    ui->kvs4l->setStyleSheet("QPushButton{background: black;" "border: 1px solid white;}"
                             "QPushButton:hover{background: white;}");
    ui->kvs5l->setStyleSheet("QPushButton{background: black;" "border: 1px solid white;}"
                             "QPushButton:hover{background: white;}");

    ui->kvs1r->setStyleSheet("QPushButton{background: black;" "border: 1px solid white;}"
                            "QPushButton:hover{background: white;}");
    ui->kvs2r->setStyleSheet("QPushButton{background: black;" "border: 1px solid white;}"
                            "QPushButton:hover{background: white;}");
    ui->kvs3r->setStyleSheet("QPushButton{background: black;" "border: 1px solid white;}"
                             "QPushButton:hover{background: white;}");
    ui->kvs4r->setStyleSheet("QPushButton{background: black;" "border: 1px solid white;}"
                            "QPushButton:hover{background: white;}");
    ui->kvs5r->setStyleSheet("QPushButton{background: black;" "border: 1px solid white;}"
                             "QPushButton:hover{background: white;}");

    ui->PlanPol->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                               "QPushButton:hover{color: black;background: white;}");


    ui->VypPol->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                               "QPushButton:hover{color: black;background: white;}");

    ui->PryamoNA->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                              "QPushButton:hover{color: black;background: white;}");

    ui->da19->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                                "QPushButton:hover{color: black;background: white;}");


    ui->SUO->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                            "QPushButton:hover{color: black;background: white;}");


    ui->BASU->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                            "QPushButton:hover{color: black;background: white;}");
    ui->PolDann->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                            "QPushButton:hover{color: black;background: white;}");

    ui->NAV->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                               "QPushButton:hover{color: black;background: white;}");
    ui->ISP->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                           "QPushButton:hover{color: black;background: white;}");
    ui->RTS->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                           "QPushButton:hover{color: black;background: white;}");

    ui->Maneur->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                           "QPushButton:hover{color: black;background: white;}");
    ui->ArvArp->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                              "QPushButton:hover{color: black;background: white;}");
    ui->KORR->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                              "QPushButton:hover{color: black;background: white;}");
    ui->Tzad->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                            "QPushButton:hover{color: black;background: white;}");

    ui->InfBKS->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                              "QPushButton:hover{color: black;background: white;}");
    ui->ENG->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                            "QPushButton:hover{color: black;background: white;}");
    ui->UprMFPU->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                            "QPushButton:hover{color: black;background: white;}");

    ui->IIPE->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                           "QPushButton:hover{color: black;background: white;}");
    ui->CIFR->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                               "QPushButton:hover{color: black;background: white;}");

    ui->empty->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                            "QPushButton:hover{color: black;background: white;}");

    ui->q->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                             "QPushButton:hover{color: black;background: white;}");

    ui->w->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                         "QPushButton:hover{color: black;background: white;}");

    ui->e->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                         "QPushButton:hover{color: black;background: white;}");

    ui->r->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                         "QPushButton:hover{color: black;background: white;}");

    ui->t->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                         "QPushButton:hover{color: black;background: white;}");

    ui->y->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                         "QPushButton:hover{color: black;background: white;}");

    ui->u->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                         "QPushButton:hover{color: black;background: white;}");
    ui->i->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                         "QPushButton:hover{color: black;background: white;}");
    ui->o->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                         "QPushButton:hover{color: black;background: white;}");
    ui->p->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                         "QPushButton:hover{color: black;background: white;}");
    ui->ruX->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                         "QPushButton:hover{color: black;background: white;}");

    ui->a->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                         "QPushButton:hover{color: black;background: white;}");
    ui->s->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                         "QPushButton:hover{color: black;background: white;}");
    ui->d->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                         "QPushButton:hover{color: black;background: white;}");
    ui->f->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                         "QPushButton:hover{color: black;background: white;}");
    ui->g->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                         "QPushButton:hover{color: black;background: white;}");

    ui->h->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                         "QPushButton:hover{color: black;background: white;}");
    ui->j->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                         "QPushButton:hover{color: black;background: white;}");
    ui->k->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                         "QPushButton:hover{color: black;background: white;}");

    ui->l->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                         "QPushButton:hover{color: black;background: white;}");

    ui->ruG->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                         "QPushButton:hover{color: black;background: white;}");
    ui->ruA->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                           "QPushButton:hover{color: black;background: white;}");
    ui->z->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                         "QPushButton:hover{color: black;background: white;}");
    ui->x->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                         "QPushButton:hover{color: black;background: white;}");

    ui->c->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                         "QPushButton:hover{color: black;background: white;}");
    ui->v->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                         "QPushButton:hover{color: black;background: white;}");
    ui->b->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                         "QPushButton:hover{color: black;background: white;}");

    ui->n->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                         "QPushButton:hover{color: black;background: white;}");

    ui->m->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                           "QPushButton:hover{color: black;background: white;}");
    ui->ruB->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                           "QPushButton:hover{color: black;background: white;}");

    ui->ruU->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                           "QPushButton:hover{color: black;background: white;}");

    ui->ruTznak->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                           "QPushButton:hover{color: black;background: white;}");

    ui->vvd->setStyleSheet("QPushButton{color: white;background: #545ce9; border: 1px solid white;}"
                               "QPushButton:hover{color: black;background: white;}");

    ui->one->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                           "QPushButton:hover{color: black;background: white;}");

    ui->two->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                           "QPushButton:hover{color: black;background: white;}");

    ui->three->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                           "QPushButton:hover{color: black;background: white;}");

    ui->four->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                             "QPushButton:hover{color: black;background: white;}");

    ui->five->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                            "QPushButton:hover{color: black;background: white;}");

    ui->six->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                            "QPushButton:hover{color: black;background: white;}");

    ui->seven->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                           "QPushButton:hover{color: black;background: white;}");

    ui->eight->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                             "QPushButton:hover{color: black;background: white;}");

    ui->nine->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                             "QPushButton:hover{color: black;background: white;}");

    ui->zero->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                            "QPushButton:hover{color: black;background: white;}");

    ui->PlusMinus->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                            "QPushButton:hover{color: black;background: white;}");
    ui->_->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                                 "QPushButton:hover{color: black;background: white;}");

    ui->clear->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                                 "QPushButton:hover{color: black;background: white;}");
    ui->menu->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                                 "QPushButton:hover{color: black;background: white;}");


    ui->sbros->setStyleSheet("QPushButton{color: white;background: black; border: 1px solid white;}"
                            "QPushButton:hover{color: black;background: white;}");

    ui->textBrowser->setStyleSheet("background: black");
    ui->textBrowser->setTextColor(Qt::blue);

}

MainWindow::~MainWindow()
{
    delete ui;
}

