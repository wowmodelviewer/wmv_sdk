/****************************************************************************
**
** Copyright (C) 2016 Klaralvdalens Datakonsult AB (KDAB).
** Contact: http://www.qt-project.org/legal
**
** This file is part of the Qt3D module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL3$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see http://www.qt.io/terms-conditions. For further
** information use the contact form at http://www.qt.io/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPLv3 included in the
** packaging of this file. Please review the following information to
** ensure the GNU Lesser General Public License version 3 requirements
** will be met: https://www.gnu.org/licenses/lgpl.html.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 2.0 or later as published by the Free
** Software Foundation and appearing in the file LICENSE.GPL included in
** the packaging of this file. Please review the following information to
** ensure the GNU General Public License version 2.0 requirements will be
** met: http://www.gnu.org/licenses/gpl-2.0.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef QT3DEXTRAS_QORBITCAMERACONTROLLER_H
#define QT3DEXTRAS_QORBITCAMERACONTROLLER_H

#include <Qt3DExtras/qabstractcameracontroller.h>

QT_BEGIN_NAMESPACE

namespace Qt3DExtras {

class QOrbitCameraControllerPrivate;

class QT3DEXTRASSHARED_EXPORT QOrbitCameraController : public QAbstractCameraController
{
    Q_OBJECT
    Q_PROPERTY(float zoomInLimit READ zoomInLimit WRITE setZoomInLimit NOTIFY zoomInLimitChanged)

public:
    explicit QOrbitCameraController(Qt3DCore::QNode *parent = nullptr);
    ~QOrbitCameraController();

    float zoomInLimit() const;

    void setZoomInLimit(float zoomInLimit);

Q_SIGNALS:
    void zoomInLimitChanged();

protected:
    QOrbitCameraController(QOrbitCameraControllerPrivate &dd, Qt3DCore::QNode *parent = nullptr);

private:
    void moveCamera(const QAbstractCameraController::InputState &state, float dt) override;

private:
    Q_DECLARE_PRIVATE(QOrbitCameraController)
};

}   // Qt3DExtras

QT_END_NAMESPACE

#endif // QT3DEXTRAS_QORBITCAMERACONTROLLER_H
