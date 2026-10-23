/* sub_60012280
 * address: 0x60012280   size: 1384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60012280(int a1, unsigned int a2, float *a3, int a4)
{
  unsigned int v8; // r0
  int v9; // r6
  int *v10; // r1
  int *v11; // r1
  int v12; // r0
  int v13; // r1
  int v14; // r0
  int v15; // r0
  int v16; // r1
  unsigned int v17; // r0
  float v18; // r0
  float v19; // s2
  int v20; // r0
  int v21; // r1
  int v22; // r0
  float v23; // r0
  float v24; // s2
  int v25; // r0
  int v26; // r1
  unsigned int v27; // r0
  unsigned int v28; // r1
  unsigned int v29; // r0
  bool v30; // zf
  unsigned int v31; // r1
  int v32; // r0
  unsigned int v33; // r1
  unsigned int v34; // r0
  unsigned int v35; // r1
  int v36; // r0

  v8 = sub_607160F4(TileMgr_instance, (int)*a3, (unsigned __int16)(int)(float)-a3[1], FIELD_U8(a1, 141), 1);
  v9 = 0;
  if ( (unsigned __int16)v8 == 1 )
  {
    switch ( (unsigned __int8)__ROR4__(v8, 16) )
    {
      case 1u:
        v9 = 1;
        FIELD_F32(a1, 116) = *a3;
        FIELD_F32(a1, 120) = a3[1];
        if ( a2 != 1 )
        {
          if ( a4 == 1 )
          {
            FIELD_F32(a1, 136) = -FIELD_F32(a1, 136);
            FIELD_U8(a1, 142) ^= 1u;
          }
          v10 = &dword_60C7B4C8;
          goto LABEL_15;
        }
        return v9;
      case 4u:
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
          v10 = &dword_60C7B4E8;
          goto LABEL_15;
        }
        return v9;
      case 5u:
        v9 = 1;
        FIELD_F32(a1, 116) = *a3;
        FIELD_F32(a1, 120) = a3[1];
        if ( a2 != 5 )
        {
          if ( !a4 )
          {
            FIELD_F32(a1, 136) = -FIELD_F32(a1, 136);
            FIELD_U8(a1, 142) ^= 1u;
          }
          v10 = &dword_60C7B508;
LABEL_15:
          StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)v10);
        }
        return v9;
      case 9u:
        FIELD_F32(a1, 116) = *a3;
        FIELD_F32(a1, 120) = a3[1];
        if ( a4 == 1 )
        {
          FIELD_F32(a1, 136) = -FIELD_F32(a1, 136);
          FIELD_U8(a1, 142) ^= 1u;
        }
        v11 = &dword_60C7B5C8;
        goto LABEL_74;
      case 0xDu:
        FIELD_F32(a1, 116) = *a3;
        FIELD_F32(a1, 120) = a3[1];
        if ( a4 == 1 )
        {
          FIELD_F32(a1, 136) = -FIELD_F32(a1, 136);
          FIELD_U8(a1, 142) ^= 1u;
        }
        v11 = &dword_60C7B628;
        goto LABEL_74;
      case 0x10u:
        FIELD_F32(a1, 116) = *a3;
        FIELD_F32(a1, 120) = a3[1];
        if ( a2 <= 0x1E && ((1 << a2) & 0x6F6F0000) != 0 )
        {
          v12 = FIELD_U32(a1, 132);
          if ( a4 )
          {
            v13 = ~v12;
            if ( v12 == 0x3FFFFFFF || (unsigned int)~v12 < 0xC0000000 )
              v13 = -1073741824;
            v14 = v12 - ((v12 + v13 + 0x40000000) & 0xC0000000);
          }
          else
          {
            v28 = v12 + 0x40000000;
            do
            {
              v29 = v28 - 0x40000000;
              v30 = v28 < 0x40000000;
              v28 -= 0x40000000;
            }
            while ( !v30 );
            v14 = -v29;
          }
        }
        else
        {
          v14 = 0;
        }
        FIELD_U32(a1, 132) = v14;
        if ( !a4 )
        {
          FIELD_F32(a1, 136) = -FIELD_F32(a1, 136);
          FIELD_U8(a1, 142) ^= 1u;
        }
        v11 = &dword_60C7B6A8;
        goto LABEL_74;
      case 0x13u:
        FIELD_F32(a1, 116) = *a3;
        FIELD_F32(a1, 120) = a3[1];
        if ( a2 <= 0x1E && ((1 << a2) & 0x6F6F0000) != 0 )
        {
          v15 = FIELD_U32(a1, 132);
          if ( a4 )
          {
            v16 = ~v15;
            if ( v15 == 0x3FFFFFFF || (unsigned int)~v15 < 0xC0000000 )
              v16 = -1073741824;
            v17 = ((v15 + v16 + 0x40000000) & 0xC0000000) - v15;
          }
          else
          {
            v31 = v15 + 0x40000000;
            do
            {
              v17 = v31 - 0x40000000;
              v30 = v31 < 0x40000000;
              v31 -= 0x40000000;
            }
            while ( !v30 );
          }
          v32 = v17 - 1073741825;
        }
        else
        {
          v32 = -1073741825;
        }
        FIELD_U32(a1, 132) = v32;
        if ( a4 == 1 )
        {
          FIELD_F32(a1, 136) = -FIELD_F32(a1, 136);
          FIELD_U8(a1, 142) ^= 1u;
        }
        v11 = &dword_60C7B6C8;
        goto LABEL_74;
      case 0x19u:
        v18 = *a3;
        FIELD_F32(a1, 116) = *a3;
        v19 = a3[1] + 16.0;
        FIELD_F32(a1, 116) = v18 + -16.0;
        FIELD_F32(a1, 120) = v19;
        if ( a2 <= 0x1E && ((1 << a2) & 0x6F600000) != 0 )
        {
          v20 = FIELD_U32(a1, 132);
          if ( a4 )
          {
            v21 = ~v20;
            if ( v20 == 0x3FFFFFFF || (unsigned int)~v20 < 0xC0000000 )
              v21 = -1073741824;
            v22 = v20 - ((v20 + v21 + 0x40000000) & 0xC0000000);
          }
          else
          {
            v33 = v20 + 0x40000000;
            do
            {
              v34 = v33 - 0x40000000;
              v30 = v33 < 0x40000000;
              v33 -= 0x40000000;
            }
            while ( !v30 );
            v22 = -v34;
          }
        }
        else
        {
          v22 = 0;
        }
        FIELD_U32(a1, 132) = v22;
        if ( !a4 )
        {
          FIELD_F32(a1, 136) = -FIELD_F32(a1, 136);
          FIELD_U8(a1, 142) ^= 1u;
        }
        v11 = &dword_60C7B708;
        goto LABEL_74;
      case 0x1Du:
        v23 = *a3;
        FIELD_F32(a1, 116) = *a3;
        v24 = a3[1] + 16.0;
        FIELD_F32(a1, 116) = v23 + -16.0;
        FIELD_F32(a1, 120) = v24;
        if ( a2 <= 0x1E && ((1 << a2) & 0x6F600000) != 0 )
        {
          v25 = FIELD_U32(a1, 132);
          if ( a4 )
          {
            v26 = ~v25;
            if ( v25 == 0x3FFFFFFF || (unsigned int)~v25 < 0xC0000000 )
              v26 = -1073741824;
            v27 = ((v25 + v26 + 0x40000000) & 0xC0000000) - v25;
          }
          else
          {
            v35 = v25 + 0x40000000;
            do
            {
              v27 = v35 - 0x40000000;
              v30 = v35 < 0x40000000;
              v35 -= 0x40000000;
            }
            while ( !v30 );
          }
          v36 = v27 - 1073741825;
        }
        else
        {
          v36 = -1073741825;
        }
        FIELD_U32(a1, 132) = v36;
        if ( a4 == 1 )
        {
          FIELD_F32(a1, 136) = -FIELD_F32(a1, 136);
          FIELD_U8(a1, 142) ^= 1u;
        }
        v11 = &dword_60C7B748;
LABEL_74:
        StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)v11);
        v9 = 1;
        break;
      default:
        return v9;
    }
  }
  return v9;
}
