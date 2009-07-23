
#include "AsmInstructionBarCreator.h"
#include "AsmInstructionsBar.h"

QWidget *AsmInstructionBarCreator::createWidget( QWidget *parent )
{
    QWidget *w( new AsmInstructionsBar( parent ) );

    w->setWindowTitle( getName() + QString( " [%1]" ).arg(widgets.size() ) );
    w->setWindowIcon( getIcon() );

    return w;
}