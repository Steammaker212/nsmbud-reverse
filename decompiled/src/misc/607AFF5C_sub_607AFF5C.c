/* sub_607AFF5C
 * address: 0x607AFF5C   size: 472   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607AFF5C(int a1)
{
  int v2; // r0
  int v3; // r5
  bool v4; // zf
  int v5; // r0
  _DWORD *v6; // r6
  int v7; // r0
  int v8; // r5
  bool v9; // zf
  float v10; // s16
  float v11; // s0
  int v12; // r1
  int v13; // r0
  bool v14; // zf
  int v15; // r1

  v2 = FIELD_U32(a1, 1204);
  if ( (v2 & 0x8000000) != 0 )
    goto LABEL_28;
  if ( v2 < 0 )
  {
    if ( sub_60793CA8(FIELD_U32(a1, 11360)) != 1 )
      return sub_607B03C0(a1);
    sub_60794954(a1 + 11356, 6, 3.0, 0.0);
    FIELD_U32(a1, 15064) = 6;
LABEL_28:
    FIELD_U32(a1, 9940) = 1;
    return sub_607B03C0(a1);
  }
  if ( FIELD_F32(a1, 124) >= 0.0 )
    goto LABEL_11;
  v3 = 70;
  v4 = (v2 & 0x10000000) == 0;
  if ( (v2 & 0x10000000) == 0 )
  {
    v3 = 124;
    v4 = (v2 & 0x40000000) == 0;
  }
  if ( v4 )
  {
    v5 = FIELD_U32(a1, 12072);
    if ( v5 == 2 )
      goto LABEL_11;
    v3 = dword_60B0CDF8[v5];
  }
  PlayerBase_dispatchVirtual3(a1 + 11356, v3, 0.0);
  FIELD_U32(a1, 15064) = v3;
  FIELD_U32(a1, 9940) = 1;
LABEL_11:
  if ( !sub_607B6CB0(a1) )
  {
    v6 = (_DWORD *)(a1 + 11360);
    if ( sub_60793CA8(FIELD_U32(a1, 11360)) || FIELD_F32(a1, 124) < 2.5 )
    {
      v7 = FIELD_U32(a1, 1204);
      v8 = 222;
      v9 = (v7 & 0x10000000) == 0;
      if ( (v7 & 0x10000000) == 0 )
      {
        v8 = 223;
        v9 = (v7 & 0x40000000) == 0;
      }
      if ( !v9 || (v8 = 224, FIELD_U32(a1, 12072) != 2) )
      {
        v10 = (*(float (__fastcall **)(_DWORD, int))(*(_DWORD *)*v6 + 76))(*v6, v8);
        v11 = (*(float (__fastcall **)(_DWORD, int, float))(*(_DWORD *)*v6 + 80))(*v6, v8, v10);
        (*(void (__fastcall **)(_DWORD, int, float, float, float))(*(_DWORD *)*v6 + 84))(*v6, v8, v10, v11, 0.0);
        v12 = FIELD_U32(a1, 1204);
        v13 = 70;
        v14 = (v12 & 0x10000000) == 0;
        if ( (v12 & 0x10000000) == 0 )
        {
          v13 = 124;
          v14 = (v12 & 0x40000000) == 0;
        }
        if ( v14 )
        {
          v15 = FIELD_U32(a1, 12072);
          v13 = -1;
          if ( v15 != 2 )
            v13 = dword_60B0CDF8[v15];
        }
        FIELD_U32(a1, 15064) = v13;
        goto LABEL_28;
      }
    }
  }
  return sub_607B03C0(a1);
}
