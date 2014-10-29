// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #ifndef RECMAMDIAREA_H
        #define RECMAMDIAREA_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "REcmaShellMdiArea.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class QCADECMAAPI_EXPORT REcmaMdiArea {

        public:
      static  void initEcma(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue create(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getQMdiArea(QScriptContext *context,
            QScriptEngine *engine)
        ;

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;

    // properties:
    

    // public methods:
    static  QScriptValue
        getAddTabButton
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        updateTabBar
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        updateTabBarSize
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        updateAddButtonLocation
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        closeTab
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        activateTab
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RMdiArea* getSelf(const QString& fName, QScriptContext* context)
    ;static REcmaShellMdiArea* getSelfShell(const QString& fName, QScriptContext* context)
    ;static  void fromScriptValue(const QScriptValue& value,
        RMdiArea*
        &out) {
            QObject* o = value.toQObject();
            out = qobject_cast<
            RMdiArea*>(o);
        }
    static  QScriptValue toScriptValue(QScriptEngine *engine,
        RMdiArea*
        const &in){
            QScriptValue s = engine->newQObject(in, QScriptEngine::QtOwnership,
            QScriptEngine::PreferExistingWrapperObject);
            /*
            if(s.isNull()){
               REcmaHelper::throwError("This object is null.", engine->currentContext());
            }
            */
            return s;
        }
    };
    #endif
    