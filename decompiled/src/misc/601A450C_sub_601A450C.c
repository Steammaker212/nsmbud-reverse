/* sub_601A450C
 * address: 0x601A450C   size: 688   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601A450C(int result)
{
  int v1; // r5
  unsigned int v2; // r10
  unsigned int v3; // r0
  unsigned int v4; // r0
  unsigned int v5; // r4
  _DWORD *v6; // r7
  char *v7; // r0
  int v8; // r1
  bool v9; // cc
  char *v10; // r0
  int v11; // r1
  unsigned int v12; // r1
  _DWORD *v13; // r0
  int v14; // [sp+4h] [bp-44h]
  int v15; // [sp+Ch] [bp-3Ch]
  int *v16; // [sp+10h] [bp-38h]
  unsigned int v17; // [sp+18h] [bp-30h]
  int v18; // [sp+1Ch] [bp-2Ch]
  int v19; // [sp+20h] [bp-28h]

  if ( !FIELD_U8(dword_60CC6D78, 2097) )
  {
    v1 = 0;
    v14 = result;
    do
    {
      v16 = (int *)(result + 4 * v1 + 172);
      if ( *v16 > 0 )
      {
        v2 = 0;
        v15 = 2 * v1;
        do
        {
          v3 = v2 + v15;
          if ( v2 + v15 >= 0x12 )
            v3 = 0;
          v19 = *(_DWORD *)(dword_60C89E18 + 4 * v3 + 28);
          v18 = FIELD_U32(v19, 32);
          if ( v18 >= 1 )
          {
            v4 = 0;
            v5 = 0;
            if ( v2 < 2 )
              v4 = v2;
            v17 = v4;
            do
            {
              v6 = (_DWORD *)sub_60182E38(v19, v5);
              (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
              v7 = (char *)v6[1];
              v8 = 0;
              while ( v7[v8] )
              {
                if ( !v7[v8 + 1] )
                {
                  ++v8;
                  break;
                }
                if ( !v7[v8 + 2] )
                {
                  v8 += 2;
                  break;
                }
                v9 = v8 + 2 <= 0x7FFFF;
                v8 += 3;
                if ( !v9 )
                {
                  v8 = 0;
                  break;
                }
              }
              if ( v8 < 0 )
                v7 = &byte_60B3BA34;
              if ( *v7 == 87 )
                goto LABEL_33;
              (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
              v10 = (char *)v6[1];
              v11 = 0;
              while ( v10[v11] )
              {
                if ( !v10[v11 + 1] )
                {
                  ++v11;
                  break;
                }
                if ( !v10[v11 + 2] )
                {
                  v11 += 2;
                  break;
                }
                v9 = v11 + 2 <= 0x7FFFF;
                v11 += 3;
                if ( !v9 )
                {
                  v11 = 0;
                  break;
                }
              }
              if ( v11 < 0 )
                v10 = &byte_60B3BA34;
              if ( *v10 == 70 )
              {
LABEL_33:
                sub_6081F544(dword_60CC6D78, v1, v2, v5, v6);
                v12 = 0;
                if ( v5 < 0x80 )
                  v12 = v5;
                v13 = (_DWORD *)(dword_60CC6D78 + 9216 * v1 + 4608 * v17 + 36 * v12);
                v13[3893] = 0;
                v13[3892] = 0;
                v13[3891] = 0;
                v13[3890] = 0;
              }
              ++v5;
            }
            while ( v5 != v18 );
          }
          ++v2;
        }
        while ( (int)v2 < *v16 );
      }
      while ( sub_6081F6E0(dword_60CC6D78, v1) != 1 )
        ;
      result = v14;
      ++v1;
    }
    while ( v1 != 9 );
    sub_6081FAB4(dword_60CC6D78);
    result = dword_60CC6D78;
    FIELD_U8(dword_60CC6D78, 2097) = 1;
  }
  return result;
}
