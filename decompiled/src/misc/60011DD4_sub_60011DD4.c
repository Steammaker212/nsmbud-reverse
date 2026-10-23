/* sub_60011DD4
 * address: 0x60011DD4   size: 1164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60011DD4(int a1, unsigned int a2, float *a3, int a4)
{
  unsigned int v8; // r0
  int v9; // r7
  int *v10; // r1
  int v11; // r0
  unsigned int v12; // r1
  unsigned int v13; // r0
  bool v14; // zf
  int v15; // r0
  int v16; // r0
  unsigned int v17; // r1
  unsigned int v18; // r0
  int v19; // r0
  unsigned int v20; // r1
  unsigned int v21; // r0
  int v22; // r0
  int v23; // r0
  unsigned int v24; // r1
  unsigned int v25; // r0
  int v26; // r1
  int v27; // r0
  int v28; // r1
  int v29; // r1
  int v30; // r0
  int v31; // r1

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
          StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)&dword_60C7B4C8);
        }
        return v9;
      case 0xAu:
        FIELD_F32(a1, 116) = *a3;
        FIELD_F32(a1, 120) = a3[1];
        if ( a4 == 1 )
        {
          FIELD_F32(a1, 136) = -FIELD_F32(a1, 136);
          FIELD_U8(a1, 142) ^= 1u;
        }
        v10 = &dword_60C7B5A8;
        goto LABEL_65;
      case 0xEu:
        FIELD_F32(a1, 116) = *a3;
        FIELD_F32(a1, 120) = a3[1];
        if ( a4 == 1 )
        {
          FIELD_F32(a1, 136) = -FIELD_F32(a1, 136);
          FIELD_U8(a1, 142) ^= 1u;
        }
        v10 = &dword_60C7B648;
        goto LABEL_65;
      case 0x10u:
        FIELD_F32(a1, 116) = *a3;
        FIELD_F32(a1, 120) = a3[1];
        if ( a2 <= 0x1E && ((1 << a2) & 0x6F6F0000) != 0 )
        {
          v11 = FIELD_U32(a1, 132);
          if ( a4 == 1 )
          {
            v12 = v11 + 0x40000000;
            do
            {
              v13 = v12 - 0x40000000;
              v14 = v12 < 0x40000000;
              v12 -= 0x40000000;
            }
            while ( !v14 );
          }
          else
          {
            v26 = ~v11;
            if ( v11 == 0x3FFFFFFF || (unsigned int)~v11 < 0xC0000000 )
              v26 = -1073741824;
            v13 = ((v11 + v26 + 0x40000000) & 0xC0000000) - v11;
          }
          v27 = v13 + 0x3FFFFFFF;
        }
        else
        {
          v27 = 0x3FFFFFFF;
        }
        FIELD_U32(a1, 132) = v27;
        if ( !a4 )
        {
          FIELD_F32(a1, 136) = -FIELD_F32(a1, 136);
          FIELD_U8(a1, 142) ^= 1u;
        }
        v10 = &dword_60C7B6A8;
        goto LABEL_65;
      case 0x13u:
        FIELD_F32(a1, 116) = *a3;
        FIELD_F32(a1, 120) = a3[1];
        if ( a2 <= 0x1E && ((1 << a2) & 0x6F6F0000) != 0 )
        {
          v15 = FIELD_U32(a1, 132);
          if ( a4 == 1 )
          {
            v16 = v15 - 0x40000000;
            do
            {
              v17 = v16 + 0x40000000;
              v16 -= 0x40000000;
            }
            while ( v17 < 0xC0000000 );
            v18 = -v16;
          }
          else
          {
            v28 = ~v15;
            if ( v15 == 0x3FFFFFFF || (unsigned int)~v15 < 0xC0000000 )
              v28 = -1073741824;
            v18 = (v15 ^ 0x80000000) - ((v15 + v28 + 0x40000000) & 0xC0000000);
          }
        }
        else
        {
          v18 = 0x80000000;
        }
        FIELD_U32(a1, 132) = v18;
        if ( a4 == 1 )
        {
          FIELD_F32(a1, 136) = -FIELD_F32(a1, 136);
          FIELD_U8(a1, 142) ^= 1u;
        }
        v10 = &dword_60C7B6C8;
        goto LABEL_65;
      case 0x16u:
        FIELD_F32(a1, 116) = *a3;
        FIELD_F32(a1, 120) = a3[1];
        if ( a2 <= 0x1E && ((1 << a2) & 0x6F600000) != 0 )
        {
          v19 = FIELD_U32(a1, 132);
          if ( a4 == 1 )
          {
            v20 = v19 + 0x40000000;
            do
            {
              v21 = v20 - 0x40000000;
              v14 = v20 < 0x40000000;
              v20 -= 0x40000000;
            }
            while ( !v14 );
          }
          else
          {
            v29 = ~v19;
            if ( v19 == 0x3FFFFFFF || (unsigned int)~v19 < 0xC0000000 )
              v29 = -1073741824;
            v21 = ((v19 + v29 + 0x40000000) & 0xC0000000) - v19;
          }
          v30 = v21 + 0x3FFFFFFF;
        }
        else
        {
          v30 = 0x3FFFFFFF;
        }
        FIELD_U32(a1, 132) = v30;
        if ( !a4 )
        {
          FIELD_F32(a1, 136) = -FIELD_F32(a1, 136);
          FIELD_U8(a1, 142) ^= 1u;
        }
        v10 = &dword_60C7B708;
        goto LABEL_65;
      case 0x1Au:
        FIELD_F32(a1, 116) = *a3;
        FIELD_F32(a1, 120) = a3[1];
        if ( a2 <= 0x1E && ((1 << a2) & 0x6F600000) != 0 )
        {
          v22 = FIELD_U32(a1, 132);
          if ( a4 == 1 )
          {
            v23 = v22 - 0x40000000;
            do
            {
              v24 = v23 + 0x40000000;
              v23 -= 0x40000000;
            }
            while ( v24 < 0xC0000000 );
            v25 = -v23;
          }
          else
          {
            v31 = ~v22;
            if ( v22 == 0x3FFFFFFF || (unsigned int)~v22 < 0xC0000000 )
              v31 = -1073741824;
            v25 = (v22 ^ 0x80000000) - ((v22 + v31 + 0x40000000) & 0xC0000000);
          }
        }
        else
        {
          v25 = 0x80000000;
        }
        FIELD_U32(a1, 132) = v25;
        if ( a4 == 1 )
        {
          FIELD_F32(a1, 136) = -FIELD_F32(a1, 136);
          FIELD_U8(a1, 142) ^= 1u;
        }
        v10 = &dword_60C7B748;
LABEL_65:
        StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)v10);
        v9 = 1;
        break;
      default:
        return v9;
    }
  }
  return v9;
}
