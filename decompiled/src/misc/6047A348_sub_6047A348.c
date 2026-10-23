/* sub_6047A348
 * address: 0x6047A348   size: 1052   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6047A348(int a1, int a2, int a3, int a4, int a5, int a6)
{
  _DWORD *v8; // r6
  int v9; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v16; // r4
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r4
  int v25; // r0
  _BYTE v26[52]; // [sp+4h] [bp-34h] BYREF

  v8 = 0;
  if ( a3 > 829317487 )
  {
    switch ( a3 )
    {
      case 829716596:
        sub_60981CF4(a1, a4, a5, a6);
        v8 = (_DWORD *)sub_60855BA4(272, 16);
        LetterAnimOn_ref(v8, a4, a5, a6, v26);
        *v8 = off_60BFD234;
        off_60BFD2A0(v8, a2, FIELD_U32(dword_60CCF464, 36), a6, v26);
        break;
      case 829715056:
        v14 = sub_60855BA4(192, 16);
        if ( v14 )
          return sub_60984604(v14, a4, a5, a6);
        break;
      case 829317488:
        if ( !sub_6098E28C(FIELD_U32(a6, 64), "CaptureOn") )
        {
          if ( sub_6098E28C(FIELD_U32(a6, 64), "DynamicCaptureOn") )
          {
            v18 = sub_60855BA4(640, 16);
            if ( !v18 )
              return (int)v8;
            return sub_6097F600(v18, a4, a6);
          }
          else if ( sub_6098E28C(FIELD_U32(a6, 64), "ScissorOn") )
          {
            v20 = sub_60855BA4(176, 16);
            if ( !v20 )
              return (int)v8;
            return sub_60984EF8(v20, a4, a6);
          }
          else if ( sub_6098E28C(FIELD_U32(a6, 64), "AlignOn") )
          {
            v22 = sub_60855BA4(192, 16);
            if ( !v22 )
              return (int)v8;
            return sub_6097C8D4(v22, a4, a6);
          }
          else
          {
            v24 = FIELD_U32(a6, 52);
            v25 = sub_60855BA4(176, 16);
            if ( v24 )
            {
              if ( !v25 )
                return (int)v8;
              return ((int (__fastcall *)(int, int, int))loc_60857B80)(v25, a4, a6);
            }
            else
            {
              if ( !v25 )
                return (int)v8;
              return sub_60984930(v25, a4, a6);
            }
          }
        }
        v11 = sub_60855BA4(640, 16);
        if ( v11 )
          return sub_6097D9D0(v11, a4, a6);
        break;
    }
  }
  else
  {
    switch ( a3 )
    {
      case 828598640:
        if ( !sub_6098E28C(FIELD_U32(a6, 64), "FrameBufferUse") )
        {
          if ( sub_6098E28C(FIELD_U32(a6, 64), "DynamicCaptureUseName") )
          {
            v19 = sub_60855BA4(208, 16);
            if ( !v19 )
              return (int)v8;
            return sub_6097FF94(v19, a4, a5, a6);
          }
          else if ( sub_6098E28C(FIELD_U32(a6, 64), "MassDrawOn") )
          {
            v21 = sub_60855BA4(512, 16);
            if ( !v21 )
              return (int)v8;
            return sub_609823F8(v21, a4, a5, a6);
          }
          else
          {
            v23 = sub_60855BA4(208, 16);
            if ( !v23 )
              return (int)v8;
            return sub_60984774(v23, a4, a5, a6);
          }
        }
        v12 = sub_60855BA4(240, 16);
        if ( v12 )
          return sub_60983E78(v12, a4, a5, a6);
        break;
      case 828665442:
        v13 = sub_60855BA4(176, 16);
        if ( v13 )
          return sub_6097D860(v13, a4, a5, a6);
        break;
      case 828665463:
        if ( !sub_6098E28C(FIELD_U32(a6, 64), "FrameBufferUse") )
        {
          v16 = sub_6098E28C(FIELD_U32(a6, 64), "DynamicCaptureUseName");
          v17 = sub_60855BA4(240, 16);
          if ( v16 )
          {
            if ( !v17 )
              return (int)v8;
            return sub_60980228(v17, a4, a5, a6);
          }
          else
          {
            if ( !v17 )
              return (int)v8;
            return sub_6098620C(v17, a4, a5, a6);
          }
        }
        v9 = sub_60855BA4(272, 16);
        if ( v9 )
          return sub_60984234(v9, a4, a5, a6);
        break;
    }
  }
  return (int)v8;
}
