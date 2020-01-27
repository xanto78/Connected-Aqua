#ifndef GLOBAL_H
#define GLOBAL_H
#include <QString>

namespace global {
    const QString PATH = "C:/PROGRAMMATION/Connected-Aqua/rcs/";
    namespace audio {

        namespace  button {
            const QString HOVER = PATH + "sound/hover.wav";

            namespace back {
                const QString BACK =  PATH + "pic/jpg";

            }
        }

    }

    namespace img {

    }

    namespace icon {
        const QString MAINLOGO = PATH + "/pic/logoaquadesktop.jpg";
    }
}
#endif // GLOBAL_H
