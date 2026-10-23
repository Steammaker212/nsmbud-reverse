/* sub_60981864
 * address: 0x60981864   size: 1128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60981864(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v8; // r6
  int v9; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r4
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r4
  int v27; // r0
  _BYTE v28[44]; // [sp+4h] [bp-2Ch] BYREF

  v8 = 0;
  if ( a3 <= 829317487 )
  {
    switch ( a3 )
    {
      case 828598640:
        if ( !sub_6098E28C(FIELD_U32(a6, 64), "FrameBufferUse") )
        {
          if ( sub_6098E28C(FIELD_U32(a6, 64), "DynamicCaptureUseName") )
          {
            v20 = sub_60855BA4(208, 16);
            if ( !v20 )
              return (_DWORD *)v8;
            return (_DWORD *)sub_6097FF94(v20, a4, a5, a6);
          }
          else if ( sub_6098E28C(FIELD_U32(a6, 64), "MassDrawOn") )
          {
            v23 = sub_60855BA4(512, 16);
            if ( !v23 )
              return (_DWORD *)v8;
            return (_DWORD *)sub_609823F8(v23, a4, a5, a6);
          }
          else
          {
            v25 = sub_60855BA4(208, 16);
            if ( !v25 )
              return (_DWORD *)v8;
            return (_DWORD *)sub_60984774(v25, a4, a5, a6);
          }
        }
        v12 = sub_60855BA4(240, 16);
        if ( v12 )
          return (_DWORD *)sub_60983E78(v12, a4, a5, a6);
        break;
      case 828665442:
        v13 = sub_60855BA4(176, 16);
        if ( v13 )
          return sub_6097D860(v13, a4, a5, a6);
        break;
      case 828665463:
        if ( !sub_6098E28C(FIELD_U32(a6, 64), "FrameBufferUse") )
        {
          v17 = sub_6098E28C(FIELD_U32(a6, 64), "DynamicCaptureUseName");
          v18 = sub_60855BA4(240, 16);
          if ( v17 )
          {
            if ( !v18 )
              return (_DWORD *)v8;
            return (_DWORD *)sub_60980228(v18, a4, a5, a6);
          }
          else
          {
            if ( !v18 )
              return (_DWORD *)v8;
            return (_DWORD *)sub_6098620C(v18, a4, a5, a6);
          }
        }
        v9 = sub_60855BA4(272, 16);
        if ( v9 )
          return (_DWORD *)sub_60984234(v9, a4, a5, a6);
        break;
    }
    return (_DWORD *)v8;
  }
  switch ( a3 )
  {
    case 829716596:
      if ( sub_60981CF4(a1, a4, a5, a6) == 1 )
      {
        v14 = sub_60855BA4(288, 16);
        v8 = v14;
        if ( v14 )
        {
          sub_60984A5C(v14, a4, a5, a6, v28);
LABEL_37:
          (*(void (__fastcall **)(int, int, _DWORD, int, _BYTE *))(*(_DWORD *)v8 + 108))(
            v8,
            a2,
            FIELD_U32(dword_60CCF464, 36),
            a6,
            v28);
          return (_DWORD *)v8;
        }
      }
      else
      {
        v16 = sub_60855BA4(272, 16);
        v8 = v16;
        if ( v16 )
        {
          LetterAnimOn_ref(v16, a4, a5, a6, v28);
          goto LABEL_37;
        }
      }
      v8 = 0;
      goto LABEL_37;
    case 829715056:
      v15 = sub_60855BA4(192, 16);
      if ( v15 )
        return (_DWORD *)sub_60984604(v15, a4, a5, a6);
      break;
    case 829317488:
      if ( !sub_6098E28C(FIELD_U32(a6, 64), "CaptureOn") )
      {
        if ( sub_6098E28C(FIELD_U32(a6, 64), "DynamicCaptureOn") )
        {
          v19 = sub_60855BA4(640, 16);
          if ( !v19 )
            return (_DWORD *)v8;
          return (_DWORD *)sub_6097F600(v19, a4, a6);
        }
        else if ( sub_6098E28C(FIELD_U32(a6, 64), "ScissorOn") )
        {
          v22 = sub_60855BA4(176, 16);
          if ( !v22 )
            return (_DWORD *)v8;
          return (_DWORD *)sub_60984EF8(v22, a4, a6);
        }
        else if ( sub_6098E28C(FIELD_U32(a6, 64), "AlignOn") )
        {
          v24 = sub_60855BA4(192, 16);
          if ( !v24 )
            return (_DWORD *)v8;
          return (_DWORD *)sub_6097C8D4(v24, a4, a6);
        }
        else
        {
          v26 = FIELD_U32(a6, 52);
          v27 = sub_60855BA4(176, 16);
          if ( v26 )
          {
            if ( !v27 )
              return (_DWORD *)v8;
            return (_DWORD *)((int (__fastcall *)(int, int, int))loc_60857B80)(v27, a4, a6);
          }
          else
          {
            if ( !v27 )
              return (_DWORD *)v8;
            return (_DWORD *)sub_60984930(v27, a4, a6);
          }
        }
      }
      v11 = sub_60855BA4(640, 16);
      if ( v11 )
        return (_DWORD *)sub_6097D9D0(v11, a4, a6);
      break;
  }
  return (_DWORD *)v8;
}
