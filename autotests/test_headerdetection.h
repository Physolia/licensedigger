#ifndef TEST_HEADERDETECTION_H
#define TEST_HEADERDETECTION_H

#include <QObject>

class TestHeaderDetection : public QObject
{
    Q_OBJECT

public:
    TestHeaderDetection() = default;

private Q_SLOTS:
    void detectGPL20_or_GPL30_or_KDE();
    void detectGPL20orlater();
    void detectLGPL20orlater();
    void detectLGPL20only();
    void detectLGPL20_or_LGPL30_or_KDE();
    void detectLGPL21only();
    void detectLGPL21orlater();
    void detectLGPL21_or_LGPL30_or_KDE();
    void detectLGPL30orlater();

private:
    void detectForIdentifier(const QString &spdxMarker);
};
#endif
