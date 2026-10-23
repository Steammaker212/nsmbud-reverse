/* sub_608B6CB0
 * address: 0x608B6CB0   size: 456   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B6CB0(int a1, int a2, int a3, int a4, int a5)
{
  int v9; // r5
  int v10; // r0
  int v11; // r0
  unsigned int *v12; // r6
  unsigned int v13; // r4
  unsigned int *v14; // r0
  unsigned int *v15; // r1
  int v16; // r0
  _BYTE *v17; // r0
  char v18; // t1
  char v19; // r2
  char v20; // r3
  char v21; // r7
  char v22; // r0
  char *v23; // r0
  char v24; // r1

  v9 = 0;
  if ( a3 >= 0 )
  {
    if ( FIELD_U8(a1, 8) )
    {
      if ( *(_DWORD *)sub_608D5464(FIELD_U32(a1, 4)) > a3 )
      {
        v10 = sub_608D5470(FIELD_U32(a1, 4), a3);
        if ( v10 )
        {
          v11 = sub_608D54A0(v10, a4);
          if ( v11 )
          {
            v12 = (unsigned int *)sub_608D556C(v11, a5);
            if ( v12 )
            {
              v13 = *v12;
              v14 = (unsigned int *)sub_608D5458(FIELD_U32(a1, 4));
              if ( *v14 > v13 )
              {
                v15 = &v14[2 * v13];
                if ( v15[2] != -1 )
                {
                  *(_DWORD *)a2 = v15[1];
                  FIELD_U32(a2, 4) = v15[2];
                  v16 = sub_608D5820(v12);
                  if ( v16 )
                  {
                    FIELD_U8(a2, 17) = *(_BYTE *)v16;
                    FIELD_U8(a2, 18) = FIELD_U8(v16, 4);
                    FIELD_U8(a2, 19) = FIELD_U8(v16, 8);
                    FIELD_U32(a2, 8) = FIELD_U32(v16, 12);
                    FIELD_U8(a2, 20) = FIELD_U8(v16, 16);
                    FIELD_U8(a2, 21) = FIELD_U8(v16, 17);
                    FIELD_U8(a2, 22) = FIELD_U8(v16, 18);
                    v18 = FIELD_U8(v16, 32);
                    v17 = (_BYTE *)(v16 + 32);
                    v19 = v17[1];
                    v20 = v17[2];
                    v21 = v17[3];
                    LOBYTE(v17) = v17[4];
                    FIELD_U8(a2, 13) = v19;
                    FIELD_U8(a2, 16) = (_BYTE)v17;
                    v22 = v18;
                  }
                  else
                  {
                    FIELD_U8(a2, 17) = sub_608D5638(v12);
                    FIELD_U8(a2, 18) = sub_608D5650(v12);
                    FIELD_U8(a2, 19) = sub_608D5674(v12);
                    FIELD_F32(a2, 8) = sub_608D56A0(v12);
                    FIELD_U8(a2, 20) = sub_608D56D0(v12);
                    FIELD_U8(a2, 21) = sub_608D5714(v12);
                    FIELD_U8(a2, 22) = sub_608D5754(v12);
                    v23 = (char *)sub_608D5790(v12);
                    v24 = *v23;
                    v20 = v23[2];
                    v21 = v23[3];
                    FIELD_U8(a2, 13) = v23[1];
                    FIELD_U8(a2, 16) = v23[4];
                    v22 = v24;
                  }
                  v9 = 1;
                  FIELD_U8(a2, 12) = v22;
                  FIELD_U8(a2, 15) = v21;
                  FIELD_U8(a2, 14) = v20;
                }
              }
            }
          }
        }
      }
    }
  }
  return v9;
}
