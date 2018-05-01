/*!
 * \file Scripting.h
 * \author masc4ii
 * \copyright 2018
 * \brief Scripting class
 */

#ifndef SCRIPTING_H
#define SCRIPTING_H

#include <QStringList>
#include <QObject>

class Scripting : public QObject
{
    Q_OBJECT
public:
    Scripting( QObject *parent = Q_NULLPTR );
    void scanScripts();
    QStringList getScriptNames();
    void setPostExportScript( QString name );
    void setPostExportScript( uint16_t index );
    void setExportDir( QString dir );
    void setSourceDir( QString dir );
    void setNextScriptInputTiff(float fps , QString folderName);
    QString postExportScriptName( void );
    uint16_t postExportScriptIndex( void );
    void executePostExportScript( void );
    bool installScript( QString fileName );

private:
    QStringList m_scriptNames;
    QString m_exportDir;
    QString m_sourceDir;
    bool m_isTiff;
    float m_fps;
    uint16_t m_postExportScriptIndex;
};

#endif // SCRIPTING_H
