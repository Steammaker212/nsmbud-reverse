/* sub_6078DC64
 * address: 0x6078DC64   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6078DC64(int result)
{
  _DWORD *v1; // r6
  int v2; // r8
  int v3; // r5
  int v4; // r0
  int v5; // r1
  int v6; // r1
  unsigned int *v7; // r1
  int v8; // [sp+0h] [bp-58h] BYREF
  _BYTE v9[12]; // [sp+4h] [bp-54h] BYREF
  float32x2_t v10; // [sp+10h] [bp-48h] BYREF
  __int64 v11; // [sp+18h] [bp-40h]
  __int64 v12; // [sp+20h] [bp-38h]
  __int64 v13; // [sp+28h] [bp-30h]
  __int64 v14; // [sp+30h] [bp-28h]
  __int64 v15; // [sp+38h] [bp-20h]

  v1 = (_DWORD *)result;
  v2 = FIELD_U32(result, 372);
  if ( v2 != -1 )
  {
    v3 = **(_DWORD **)(result + 24);
    (*(void (__fastcall **)(int, _DWORD, float32x2_t *, _BYTE *))(*(_DWORD *)v3 + 100))(
      v3,
      FIELD_U32(result, 372),
      &v10,
      v9);
    v4 = v1[118];
    if ( (unsigned int)(v4 - 7) <= 1 )
    {
      v5 = v1[7];
      if ( v5 == 177 )
      {
        v10.n64_u64[0] = *(unsigned __int64 *)&dword_60CC48A0;
        v11 = *(_QWORD *)&dword_60CC48A8;
        v12 = *(_QWORD *)&dword_60CC48B0;
        v13 = *(_QWORD *)&dword_60CC48B8;
        v14 = *(_QWORD *)&dword_60CC48C0;
        v15 = *(_QWORD *)&dword_60CC48C8;
      }
      else if ( v5 == 176 )
      {
        v10.n64_u64[0] = *(unsigned __int64 *)&dword_60CC48D0;
        v11 = *(_QWORD *)&dword_60CC48D8;
        v12 = *(_QWORD *)&dword_60CC48E0;
        v13 = *(_QWORD *)&dword_60CC48E8;
        v14 = *(_QWORD *)dword_60CC48F0;
        v15 = *(_QWORD *)&dword_60CC48F0[2];
      }
    }
    v6 = v1[58];
    if ( v6 )
    {
      if ( (v6 & 2) != 0 )
      {
        v7 = v1 + 56;
        if ( v4 == 9 )
        {
          v8 = -*v7;
          Mtx34_rotateX(&v10, (unsigned int *)&v8);
        }
        else
        {
          Mtx34_rotateY(&v10, v7);
        }
      }
      if ( (v1[58] & 4) != 0 )
        Mtx34_rotateZ(&v10, v1 + 57);
    }
    return (*(int (__fastcall **)(int, int, float32x2_t *, _BYTE *))(*(_DWORD *)v3 + 96))(v3, v2, &v10, v9);
  }
  return result;
}
