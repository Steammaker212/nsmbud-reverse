/* sub_60012810
 * address: 0x60012810   size: 1316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60012810(int a1, unsigned int a2, float *a3, int a4)
{
  unsigned int v8; // r0
  int v9; // r7
  State *v10; // r1
  int *v11; // r1
  unsigned int v12; // r0
  unsigned int v13; // r1
  unsigned int v14; // r0
  int v15; // r0
  unsigned int v16; // r1
  bool v17; // cf
  int v18; // r0
  int v19; // r1
  unsigned int v20; // r0
  float v21; // s2
  unsigned int v22; // r0
  unsigned int v23; // r1
  unsigned int v24; // r0
  int v25; // r0
  unsigned int v26; // r1
  float v27; // s2
  int v28; // r0
  int v29; // r1
  unsigned int v30; // r0
  unsigned int v31; // r1
  bool v32; // zf
  int v33; // r0
  unsigned int v34; // r1
  int v35; // r0

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
        v11 = &dword_60C7B528;
        goto LABEL_71;
      case 5:
        v9 = 1;
        FIELD_F32(a1, 116) = *a3;
        FIELD_F32(a1, 120) = a3[1];
        if ( a2 != 5 )
        {
          if ( a4 == 1 )
          {
            FIELD_F32(a1, 136) = -FIELD_F32(a1, 136);
            FIELD_U8(a1, 142) ^= 1u;
          }
          v10 = (State *)&dword_60C7B508;
LABEL_14:
          StateMgr__changeState((StateMgr *)(a1 + 20), &FIELD_U32(v10, 0x0));
        }
        return v9;
      case 7:
        FIELD_F32(a1, 116) = *a3;
        FIELD_F32(a1, 120) = a3[1];
        if ( a4 == 1 )
        {
          FIELD_F32(a1, 136) = -FIELD_F32(a1, 136);
          FIELD_U8(a1, 142) ^= 1u;
        }
        v11 = &dword_60C7B588;
        goto LABEL_71;
      case 0xB:
        FIELD_F32(a1, 116) = *a3;
        FIELD_F32(a1, 120) = a3[1];
        if ( a4 == 1 )
        {
          FIELD_F32(a1, 136) = -FIELD_F32(a1, 136);
          FIELD_U8(a1, 142) ^= 1u;
        }
        v11 = &dword_60C7B5E8;
        goto LABEL_71;
      case 0x11:
        FIELD_F32(a1, 116) = *a3;
        FIELD_F32(a1, 120) = a3[1];
        if ( a2 <= 0x1E && ((1 << a2) & 0x6F6F0000) != 0 )
        {
          v12 = FIELD_U32(a1, 132);
          if ( a4 )
          {
            v13 = ~v12;
            v14 = v12 + 0x40000000;
            if ( v13 <= 0xC0000000 )
              v13 = -1073741824;
            v15 = v14 - ((v13 + v14) & 0xC0000000);
          }
          else
          {
            do
            {
              v16 = v12 - 0x40000000;
              v17 = v12 >= 0xC0000000;
              v12 -= 0x40000000;
            }
            while ( !v17 );
            v15 = -v16;
          }
        }
        else
        {
          v15 = 0x40000000;
        }
        FIELD_U32(a1, 132) = v15;
        if ( !a4 )
        {
          FIELD_F32(a1, 136) = -FIELD_F32(a1, 136);
          FIELD_U8(a1, 142) ^= 1u;
        }
        v11 = &dword_60C7B688;
        goto LABEL_71;
      case 0x12:
        FIELD_F32(a1, 116) = *a3;
        FIELD_F32(a1, 120) = a3[1];
        if ( a2 <= 0x1E && ((1 << a2) & 0x6F6F0000) != 0 )
        {
          v18 = FIELD_U32(a1, 132);
          if ( a4 )
          {
            v19 = ~v18;
            if ( v18 == 0x3FFFFFFF || (unsigned int)~v18 < 0xC0000000 )
              v19 = -1073741824;
            v20 = ((v18 + v19 + 0x40000000) & 0xC0000000) - v18;
          }
          else
          {
            v31 = v18 + 0x40000000;
            do
            {
              v20 = v31 - 0x40000000;
              v32 = v31 < 0x40000000;
              v31 -= 0x40000000;
            }
            while ( !v32 );
          }
          v33 = v20 - 1;
        }
        else
        {
          v33 = -1;
        }
        FIELD_U32(a1, 132) = v33;
        if ( a4 == 1 )
        {
          FIELD_F32(a1, 136) = -FIELD_F32(a1, 136);
          FIELD_U8(a1, 142) ^= 1u;
        }
        v11 = &dword_60C7B6E8;
        goto LABEL_71;
      case 0x15:
        v21 = *a3;
        FIELD_F32(a1, 116) = *a3;
        FIELD_F32(a1, 120) = a3[1];
        FIELD_F32(a1, 116) = v21 + -16.0;
        if ( a2 <= 0x1E && ((1 << a2) & 0x6F600000) != 0 )
        {
          v22 = FIELD_U32(a1, 132);
          if ( a4 )
          {
            v23 = ~v22;
            v24 = v22 + 0x40000000;
            if ( v23 <= 0xC0000000 )
              v23 = -1073741824;
            v25 = v24 - ((v23 + v24) & 0xC0000000);
          }
          else
          {
            do
            {
              v26 = v22 - 0x40000000;
              v17 = v22 >= 0xC0000000;
              v22 -= 0x40000000;
            }
            while ( !v17 );
            v25 = -v26;
          }
        }
        else
        {
          v25 = 0x40000000;
        }
        FIELD_U32(a1, 132) = v25;
        if ( !a4 )
        {
          FIELD_F32(a1, 136) = -FIELD_F32(a1, 136);
          FIELD_U8(a1, 142) ^= 1u;
        }
        v11 = &dword_60C7B728;
        goto LABEL_71;
      case 0x1B:
        v27 = *a3;
        FIELD_F32(a1, 116) = *a3;
        FIELD_F32(a1, 120) = a3[1];
        FIELD_F32(a1, 116) = v27 + -16.0;
        if ( a2 <= 0x1E && ((1 << a2) & 0x6F600000) != 0 )
        {
          v28 = FIELD_U32(a1, 132);
          if ( a4 )
          {
            v29 = ~v28;
            if ( v28 == 0x3FFFFFFF || (unsigned int)~v28 < 0xC0000000 )
              v29 = -1073741824;
            v30 = ((v28 + v29 + 0x40000000) & 0xC0000000) - v28;
          }
          else
          {
            v34 = v28 + 0x40000000;
            do
            {
              v30 = v34 - 0x40000000;
              v32 = v34 < 0x40000000;
              v34 -= 0x40000000;
            }
            while ( !v32 );
          }
          v35 = v30 - 1;
        }
        else
        {
          v35 = -1;
        }
        FIELD_U32(a1, 132) = v35;
        if ( a4 == 1 )
        {
          FIELD_F32(a1, 136) = -FIELD_F32(a1, 136);
          FIELD_U8(a1, 142) ^= 1u;
        }
        v11 = &dword_60C7B768;
LABEL_71:
        StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)v11);
        v9 = 1;
        break;
      default:
        return v9;
    }
  }
  return v9;
}
