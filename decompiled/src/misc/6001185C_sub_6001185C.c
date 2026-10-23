/* sub_6001185C
 * address: 0x6001185C   size: 1360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6001185C(int a1, unsigned int a2, float *a3, int a4)
{
  unsigned int v8; // r0
  int v9; // r7
  State *v10; // r1
  int *v11; // r1
  int v12; // r0
  unsigned int v13; // r1
  unsigned int v14; // r0
  bool v15; // zf
  int v16; // r0
  int v17; // r1
  int v18; // r0
  unsigned int v19; // r0
  int v20; // r0
  unsigned int v21; // r1
  unsigned int v22; // r0
  int v23; // r0
  int v24; // r1
  int v25; // r0
  unsigned int v26; // r0
  int v27; // r1
  int v28; // r0
  int v29; // r1
  int v30; // r1
  int v31; // r0
  int v32; // r1

  v8 = sub_607160F4(TileMgr_instance, (int)*a3, (unsigned __int16)(int)(float)-a3[1], FIELD_U8(a1, 141), 1);
  v9 = 0;
  if ( (unsigned __int16)v8 == 1 )
  {
    switch ( BYTE2(v8) )
    {
      case 0:
        v9 = 1;
        FIELD_F32(a1, 116) = *a3;
        FIELD_F32(a1, 120) = a3[1];
        if ( a2 )
        {
          if ( a4 == 1 )
          {
            FIELD_F32(a1, 136) = -FIELD_F32(a1, 136);
            FIELD_U8(a1, 142) ^= 1u;
          }
          v10 = &stru_60C7B4A8;
          goto LABEL_14;
        }
        return v9;
      case 3:
        FIELD_F32(a1, 116) = *a3;
        FIELD_F32(a1, 120) = a3[1];
        if ( a4 == 1 )
        {
          FIELD_F32(a1, 136) = -FIELD_F32(a1, 136);
          FIELD_U8(a1, 142) ^= 1u;
        }
        v11 = &dword_60C7B548;
        goto LABEL_75;
      case 4:
        v9 = 1;
        FIELD_F32(a1, 116) = *a3;
        FIELD_F32(a1, 120) = a3[1];
        if ( a2 != 4 )
        {
          if ( a4 == 1 )
          {
            FIELD_F32(a1, 136) = -FIELD_F32(a1, 136);
            FIELD_U8(a1, 142) ^= 1u;
          }
          v10 = (State *)&dword_60C7B4E8;
LABEL_14:
          StateMgr__changeState((StateMgr *)(a1 + 20), &FIELD_U32(v10, 0x0));
        }
        return v9;
      case 8:
        FIELD_F32(a1, 116) = *a3;
        FIELD_F32(a1, 120) = a3[1];
        if ( a4 == 1 )
        {
          FIELD_F32(a1, 136) = -FIELD_F32(a1, 136);
          FIELD_U8(a1, 142) ^= 1u;
        }
        v11 = &dword_60C7B568;
        goto LABEL_75;
      case 0xC:
        FIELD_F32(a1, 116) = *a3;
        FIELD_F32(a1, 120) = a3[1];
        if ( a4 == 1 )
        {
          FIELD_F32(a1, 136) = -FIELD_F32(a1, 136);
          FIELD_U8(a1, 142) ^= 1u;
        }
        v11 = &dword_60C7B608;
        goto LABEL_75;
      case 0x11:
        FIELD_F32(a1, 116) = *a3;
        FIELD_F32(a1, 120) = a3[1];
        if ( a2 <= 0x1E && ((1 << a2) & 0x6F6F0000) != 0 )
        {
          v12 = FIELD_U32(a1, 132);
          if ( a4 == 1 )
          {
            v13 = v12 + 0x40000000;
            do
            {
              v14 = v13 - 0x40000000;
              v15 = v13 < 0x40000000;
              v13 -= 0x40000000;
            }
            while ( !v15 );
          }
          else
          {
            v27 = ~v12;
            if ( v12 == 0x3FFFFFFF || (unsigned int)~v12 < 0xC0000000 )
              v27 = -1073741824;
            v14 = ((v12 + v27 + 0x40000000) & 0xC0000000) - v12;
          }
          v28 = v14 + 0x7FFFFFFF;
        }
        else
        {
          v28 = 0x7FFFFFFF;
        }
        FIELD_U32(a1, 132) = v28;
        if ( !a4 )
        {
          FIELD_F32(a1, 136) = -FIELD_F32(a1, 136);
          FIELD_U8(a1, 142) ^= 1u;
        }
        v11 = &dword_60C7B688;
        goto LABEL_75;
      case 0x12:
        FIELD_F32(a1, 116) = *a3;
        FIELD_F32(a1, 120) = a3[1];
        if ( a2 <= 0x1E && ((1 << a2) & 0x6F6F0000) != 0 )
        {
          v16 = FIELD_U32(a1, 132);
          if ( a4 == 1 )
          {
            v17 = v16 + 0x80000000;
            do
            {
              v18 = v17 - 0x40000000;
              v15 = v17 + 0x80000000 >= v17 - 0x40000000;
              v17 -= 0x40000000;
            }
            while ( !v15 );
            v19 = -v18;
          }
          else
          {
            v29 = ~v16;
            if ( v16 == 0x3FFFFFFF || (unsigned int)~v16 < 0xC0000000 )
              v29 = -1073741824;
            v19 = v16 - 0x40000000 - ((v16 + v29 + 0x40000000) & 0xC0000000);
          }
        }
        else
        {
          v19 = -1073741824;
        }
        FIELD_U32(a1, 132) = v19;
        if ( a4 == 1 )
        {
          FIELD_F32(a1, 136) = -FIELD_F32(a1, 136);
          FIELD_U8(a1, 142) ^= 1u;
        }
        v11 = &dword_60C7B6E8;
        goto LABEL_75;
      case 0x18:
        FIELD_F32(a1, 116) = *a3;
        FIELD_F32(a1, 120) = a3[1] + 16.0;
        if ( a2 <= 0x1E && ((1 << a2) & 0x6F600000) != 0 )
        {
          v20 = FIELD_U32(a1, 132);
          if ( a4 == 1 )
          {
            v21 = v20 + 0x40000000;
            do
            {
              v22 = v21 - 0x40000000;
              v15 = v21 < 0x40000000;
              v21 -= 0x40000000;
            }
            while ( !v15 );
          }
          else
          {
            v30 = ~v20;
            if ( v20 == 0x3FFFFFFF || (unsigned int)~v20 < 0xC0000000 )
              v30 = -1073741824;
            v22 = ((v20 + v30 + 0x40000000) & 0xC0000000) - v20;
          }
          v31 = v22 + 0x7FFFFFFF;
        }
        else
        {
          v31 = 0x7FFFFFFF;
        }
        FIELD_U32(a1, 132) = v31;
        if ( !a4 )
        {
          FIELD_F32(a1, 136) = -FIELD_F32(a1, 136);
          FIELD_U8(a1, 142) ^= 1u;
        }
        v11 = &dword_60C7B728;
        goto LABEL_75;
      case 0x1E:
        FIELD_F32(a1, 116) = *a3;
        FIELD_F32(a1, 120) = a3[1] + 16.0;
        if ( a2 <= 0x1E && ((1 << a2) & 0x6F600000) != 0 )
        {
          v23 = FIELD_U32(a1, 132);
          if ( a4 == 1 )
          {
            v24 = v23 + 0x80000000;
            do
            {
              v25 = v24 - 0x40000000;
              v15 = v24 + 0x80000000 >= v24 - 0x40000000;
              v24 -= 0x40000000;
            }
            while ( !v15 );
            v26 = -v25;
          }
          else
          {
            v32 = ~v23;
            if ( v23 == 0x3FFFFFFF || (unsigned int)~v23 < 0xC0000000 )
              v32 = -1073741824;
            v26 = v23 - 0x40000000 - ((v23 + v32 + 0x40000000) & 0xC0000000);
          }
        }
        else
        {
          v26 = -1073741824;
        }
        FIELD_U32(a1, 132) = v26;
        if ( a4 == 1 )
        {
          FIELD_F32(a1, 136) = -FIELD_F32(a1, 136);
          FIELD_U8(a1, 142) ^= 1u;
        }
        v11 = &dword_60C7B768;
LABEL_75:
        StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)v11);
        v9 = 1;
        break;
      default:
        return v9;
    }
  }
  return v9;
}
