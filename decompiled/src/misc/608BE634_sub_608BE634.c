/* sub_608BE634
 * address: 0x608BE634   size: 784   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608BE634(int a1, _DWORD *a2)
{
  int result; // r0
  int v5; // r0
  signed int v6; // r0
  int v7; // r1
  int v8; // r2
  int v9; // r0
  int v10; // r0
  unsigned int v11; // r2
  unsigned __int64 v12; // r0
  unsigned int v13; // r0
  signed int v14; // r0
  int v15; // r6
  signed int v16; // r0
  int v17; // r7
  int v18; // r0
  int v19; // r0
  int v20; // r7
  _DWORD *v21; // r5
  int v22; // r0
  _DWORD *v23; // r5
  int i; // r7
  _BYTE v25[48]; // [sp+8h] [bp-30h] BYREF

  result = FIELD_U8(a1, 176);
  if ( result )
  {
    FIELD_U32(a1, 456) = a2[171];
    v5 = sub_608C0FD8(v25);
    sub_608C103C(v5, FIELD_U32(a1, 456));
    if ( sub_608BE948(a1, v25) == 1 )
    {
      v6 = a2[3];
      if ( !v6 )
        v6 = a2[2] / 5u;
      FIELD_U32(a1, 236) = v6;
      FIELD_U8(a1, 186) = v6 > 0;
      FIELD_U32(a1, 228) = *a2;
      FIELD_U32(a1, 232) = a2[1];
      FIELD_U32(a1, 55168) = a2[4];
      v7 = a2[6];
      v8 = FIELD_U32(a1, 204);
      FIELD_U32(v8, 772) = a2[5];
      FIELD_U32(v8, 776) = v7;
      *(_DWORD *)(FIELD_U32(a1, 204) + 20) = a1;
      *(_DWORD *)(FIELD_U32(a1, 204) + 28) = a1 + 252;
      *(_DWORD *)(FIELD_U32(a1, 204) + 32) = FIELD_U8(a1, 242);
      *(_DWORD *)(FIELD_U32(a1, 204) + 36) = FIELD_U32(a1, 244);
      FIELD_U8(a1, 36) = 1;
      if ( sub_608C1124(v25) != 1 )
      {
LABEL_9:
        if ( FIELD_U8(a1, 260) )
          goto LABEL_18;
        v10 = FIELD_U32(a1, 228);
        if ( v10 == 1 )
        {
          v12 = FIELD_S32(a1, 256) * (__int64)FIELD_S32(a1, 232) / 0x3E8uLL;
          v11 = -1;
          if ( !__CFSUB__(HIDWORD(v12), 0, (_DWORD)v12 == -1) )
            v11 = FIELD_S32(a1, 256) * (__int64)FIELD_S32(a1, 232) / 0x3E8uLL;
        }
        else
        {
          v11 = 0;
          if ( !v10 )
            v11 = FIELD_U32(a1, 232);
        }
        if ( v11 < FIELD_U32(a1, 268) )
        {
LABEL_18:
          sub_608C0874(a1, a1 + 252);
          v13 = FIELD_U32(a1, 292);
          if ( v13 <= 0x2000 )
          {
            v14 = *(_DWORD *)(FIELD_U32(a1, 208) + 8) / (v13 + 2304);
            FIELD_U32(a1, 212) = v14;
            if ( v14 >= 2 )
            {
              v15 = 0;
              if ( v14 >= 33 )
                FIELD_U32(a1, 212) = 32;
              FIELD_U32(a1, 216) = 0;
              FIELD_U32(a1, 220) = 0;
              FIELD_U32(a1, 224) = 0;
              if ( FIELD_S32(a1, 996) < 1 )
              {
LABEL_26:
                FIELD_U8(a1, 179) = 1;
                sub_608BEA10(a1, v25);
              }
              else
              {
                v16 = 0x3BADC0u;
                v17 = a1 + 1024;
                while ( 1 )
                {
                  v18 = sub_608CAEDC(v16);
                  v19 = sub_608CB104(v18, 1, 255, sub_608BF9CC, v17);
                  if ( !v19 )
                    break;
                  FIELD_U32(v17, 4) = v19;
                  ++v15;
                  v17 += 3328;
                  v16 = FIELD_U32(a1, 996);
                  if ( v15 >= v16 )
                    goto LABEL_26;
                }
                if ( v15 >= 1 )
                {
                  v20 = 0;
                  v21 = (_DWORD *)(a1 + 1028);
                  do
                  {
                    if ( *v21 )
                    {
                      sub_608C932C();
                      *v21 = 0;
                    }
                    ++v20;
                    v21 += 832;
                  }
                  while ( v20 != v15 );
                }
                v22 = FIELD_U32(a1, 996);
                if ( v22 >= 1 )
                {
                  v23 = (_DWORD *)(a1 + 1024);
                  for ( i = 0; i < v22; ++i )
                  {
                    if ( *v23 )
                    {
                      sub_608D7020(FIELD_U32(a1, 208));
                      *v23 = 0;
                      v22 = FIELD_U32(a1, 996);
                    }
                    v23 += 832;
                  }
                }
              }
            }
          }
        }
        else
        {
          FIELD_U8(a1, 39) = 1;
          (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 20))(a1);
        }
        return sub_608C1008(v25);
      }
      FIELD_U8(a1, 281) = sub_608C1158(v25);
      v9 = FIELD_U32(a1, 204);
      if ( v9 && sub_608D477C(v9 + 768, v25, a1 + 252) == 1 )
      {
        if ( sub_608D4BD0(FIELD_U32(a1, 204) + 768) )
          goto LABEL_9;
        FIELD_U8(a1, 36) = 0;
      }
    }
    return sub_608C1008(v25);
  }
  return result;
}
