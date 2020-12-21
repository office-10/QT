/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#ifndef JSCanvasRenderingContext2D_h
#define JSCanvasRenderingContext2D_h

#include "JSCanvasRenderingContext.h"
#include <runtime/JSObjectWithGlobalObject.h>

namespace WebCore {

class CanvasRenderingContext2D;

class JSCanvasRenderingContext2D : public JSCanvasRenderingContext {
    typedef JSCanvasRenderingContext Base;
public:
    JSCanvasRenderingContext2D(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<CanvasRenderingContext2D>);
    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertyDescriptor&);
    virtual void put(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::JSValue, JSC::PutPropertySlot&);
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount, &s_info);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);

    // Custom attributes
    JSC::JSValue strokeStyle(JSC::ExecState*) const;
    void setStrokeStyle(JSC::ExecState*, JSC::JSValue);
    JSC::JSValue fillStyle(JSC::ExecState*) const;
    void setFillStyle(JSC::ExecState*, JSC::JSValue);

    // Custom functions
    JSC::JSValue fillText(JSC::ExecState*);
    JSC::JSValue strokeText(JSC::ExecState*);
    JSC::JSValue setStrokeColor(JSC::ExecState*);
    JSC::JSValue setFillColor(JSC::ExecState*);
    JSC::JSValue strokeRect(JSC::ExecState*);
    JSC::JSValue drawImage(JSC::ExecState*);
    JSC::JSValue drawImageFromRect(JSC::ExecState*);
    JSC::JSValue setShadow(JSC::ExecState*);
    JSC::JSValue createPattern(JSC::ExecState*);
    JSC::JSValue putImageData(JSC::ExecState*);
    JSC::JSValue createImageData(JSC::ExecState*);
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};


class JSCanvasRenderingContext2DPrototype : public JSC::JSObjectWithGlobalObject {
    typedef JSC::JSObjectWithGlobalObject Base;
public:
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static const JSC::ClassInfo s_info;
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount, &s_info);
    }
    JSCanvasRenderingContext2DPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure) : JSC::JSObjectWithGlobalObject(globalData, globalObject, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionSave(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionRestore(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionScale(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionRotate(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionTranslate(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionTransform(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionSetTransform(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionCreateLinearGradient(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionCreateRadialGradient(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionClearRect(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionFillRect(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionBeginPath(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionClosePath(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionMoveTo(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionLineTo(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionQuadraticCurveTo(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionBezierCurveTo(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionArcTo(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionRect(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionArc(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionFill(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionStroke(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionClip(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionIsPointInPath(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionMeasureText(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionSetAlpha(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionSetCompositeOperation(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionSetLineWidth(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionSetLineCap(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionSetLineJoin(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionSetMiterLimit(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionClearShadow(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionFillText(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionStrokeText(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionSetStrokeColor(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionSetFillColor(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionStrokeRect(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionDrawImage(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionDrawImageFromRect(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionSetShadow(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionCreatePattern(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionPutImageData(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionCreateImageData(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsCanvasRenderingContext2DPrototypeFunctionGetImageData(JSC::ExecState*);
// Attributes

JSC::JSValue jsCanvasRenderingContext2DGlobalAlpha(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSCanvasRenderingContext2DGlobalAlpha(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsCanvasRenderingContext2DGlobalCompositeOperation(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSCanvasRenderingContext2DGlobalCompositeOperation(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsCanvasRenderingContext2DLineWidth(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSCanvasRenderingContext2DLineWidth(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsCanvasRenderingContext2DLineCap(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSCanvasRenderingContext2DLineCap(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsCanvasRenderingContext2DLineJoin(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSCanvasRenderingContext2DLineJoin(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsCanvasRenderingContext2DMiterLimit(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSCanvasRenderingContext2DMiterLimit(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsCanvasRenderingContext2DShadowOffsetX(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSCanvasRenderingContext2DShadowOffsetX(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsCanvasRenderingContext2DShadowOffsetY(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSCanvasRenderingContext2DShadowOffsetY(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsCanvasRenderingContext2DShadowBlur(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSCanvasRenderingContext2DShadowBlur(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsCanvasRenderingContext2DShadowColor(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSCanvasRenderingContext2DShadowColor(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsCanvasRenderingContext2DFont(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSCanvasRenderingContext2DFont(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsCanvasRenderingContext2DTextAlign(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSCanvasRenderingContext2DTextAlign(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsCanvasRenderingContext2DTextBaseline(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSCanvasRenderingContext2DTextBaseline(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsCanvasRenderingContext2DStrokeStyle(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSCanvasRenderingContext2DStrokeStyle(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsCanvasRenderingContext2DFillStyle(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSCanvasRenderingContext2DFillStyle(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsCanvasRenderingContext2DConstructor(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);

} // namespace WebCore

#endif
