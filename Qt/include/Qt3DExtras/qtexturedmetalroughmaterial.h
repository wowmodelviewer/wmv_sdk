/****************************************************************************
**
** Copyright (C) 2017 Klaralvdalens Datakonsult AB (KDAB).
** Contact: https://www.qt.io/licensing/
**
** This file is part of the Qt3D module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL3 included in the
** packaging of this file. Please review the following information to
** ensure the GNU Lesser General Public License version 3 requirements
** will be met: https://www.gnu.org/licenses/lgpl-3.0.html.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 2.0 or (at your option) the GNU General
** Public license version 3 or any later version approved by the KDE Free
** Qt Foundation. The licenses are as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL2 and LICENSE.GPL3
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: https://www.gnu.org/licenses/gpl-2.0.html and
** https://www.gnu.org/licenses/gpl-3.0.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef QT3DEXTRAS_QTEXTUREDMETALROUGHMATERIAL_H
#define QT3DEXTRAS_QTEXTUREDMETALROUGHMATERIAL_H

#include <Qt3DExtras/qmetalroughmaterial.h>

QT_BEGIN_NAMESPACE

namespace Qt3DExtras {

class QT_DEPRECATED_X("Use Qt3DExtras::QMetalRoughMaterial") QT3DEXTRASSHARED_EXPORT QTexturedMetalRoughMaterial : public QMetalRoughMaterial
{
    Q_OBJECT
    Q_PROPERTY(QVariant ambientOcclusion READ ambientOcclusion WRITE setAmbientOcclusion NOTIFY ambientOcclusionChanged)
    Q_PROPERTY(QVariant normal READ normal WRITE setNormal NOTIFY normalChanged)

public:
    explicit QTexturedMetalRoughMaterial(Qt3DCore::QNode *parent = nullptr);

Q_SIGNALS:
    void ambientOcclusionChanged(const QVariant &ambientOcclusion);
    void normalChanged(const QVariant &normal);
};

} // namespace Qt3DExtras

QT_END_NAMESPACE

#endif // QT3DEXTRAS_QTEXTUREDMETALROUGHMATERIAL_H
