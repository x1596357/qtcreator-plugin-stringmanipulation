#ifndef STRINGMANIPULATIONCORE_HPP
#define STRINGMANIPULATIONCORE_HPP

#include <QObject>

class StringManipulationCore : public QObject
{
    Q_OBJECT
public:
    explicit StringManipulationCore(QObject *parent = nullptr);

public slots:
    void selectedStringToCharArray();
    void stripSpaceInSelectedString();
    void addBreakPoint();
    void sortDeclarationByLength();
    void pasteDiff();
};

#endif // STRINGMANIPULATIONCORE_HPP
