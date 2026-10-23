/* sub_60796150
 * address: 0x60796150   size: 548   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60796150(int a1, int a2, int a3, int a4, float a5, float a6, int a7)
{
  int v13; // r5
  bool v14; // zf
  unsigned int v15; // r0
  bool v16; // zf
  int v17; // r9
  int v18; // r10
  int v19; // r2
  int *v20; // r1
  _DWORD *v21; // r0
  int v22; // r1
  float v24[2]; // [sp+4h] [bp-3Ch] BYREF
  char v25; // [sp+Ch] [bp-34h]

  v13 = 0;
  if ( !sub_60766714(a1) )
  {
    v14 = (FIELD_U8(a1, 1204) & 0x10) == 0;
    if ( (FIELD_U8(a1, 1204) & 0x10) != 0 )
      v14 = (FIELD_U8(a1, 1219) & 8) == 0;
    if ( v14 )
    {
      v13 = 1;
      if ( !sub_607BBA94(a1, a5 * 0.5, a6 * 0.5) )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 188))(a1);
        if ( !sub_6079B544(a1, a5, a6) )
        {
          if ( (FIELD_U8(a1, 1209) & 0x20) != 0 )
          {
            v19 = 0;
            v20 = &dword_60CC50AC;
          }
          else
          {
            FIELD_F32(a1, 88) = a6;
            if ( a5 <= 0.0 && FIELD_S32(a1, 1232) < 0 && (FIELD_U8(a1, 6912) & 1) != 0 )
            {
LABEL_26:
              if ( !a2 )
              {
                sub_6078667C((_DWORD *)(a1 + 688), 2);
                FIELD_U32(a1, 1228) |= 0x2000u;
              }
              if ( a3 == 2 )
              {
                v21 = (_DWORD *)(a1 + 688);
                v22 = 6;
              }
              else
              {
                if ( a3 != 1 )
                  goto LABEL_33;
                v21 = (_DWORD *)(a1 + 688);
                v22 = 5;
              }
              sub_6078667C(v21, v22);
LABEL_33:
              if ( a7 == 1 )
              {
                FIELD_U32(a1, 12124) = 15;
                FIELD_U32(a1, 1220) |= 0x40000000u;
              }
              return v13;
            }
            v15 = FIELD_U32(a1, 1204);
            v16 = (FIELD_U32(a1, 1212) & 0x40) == 0;
            if ( (FIELD_U32(a1, 1212) & 0x40) != 0 )
              v16 = (v15 & 0x2000000) == 0;
            if ( v16 )
            {
              v17 = (v15 >> 30) & 1;
              v18 = 0;
            }
            else
            {
              v17 = 0;
              v18 = 1;
            }
            if ( a5 == 0.0 )
            {
              FIELD_F32(a1, 124) = a5;
              Player_changeState(a1, (StateBase *)&unk_60CC4C04, 1);
            }
            else
            {
              v24[0] = a5;
              LODWORD(v24[1]) = a4;
              v25 = 1;
              sub_60773E6C(a1, (StateBase *)&dword_60CC4BE0, (int)v24);
            }
            FIELD_U32(a1, 1228) |= 0x40000u;
            FIELD_U32(a1, 1220) |= 0x100000u;
            if ( v18 == 1 )
            {
              v19 = sub_607B9CC8(a1, 2, a4);
              v20 = &dword_60CC4E0C;
            }
            else
            {
              if ( v17 != 1 )
                goto LABEL_26;
              v19 = 1;
              v20 = (int *)&unk_60CC4C70;
            }
          }
          Player_changeState(a1, (StateBase *)v20, v19);
          goto LABEL_26;
        }
      }
    }
  }
  return v13;
}
