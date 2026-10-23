/* sub_607EBA08
 * address: 0x607EBA08   size: 464   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607EBA08(int a1, int a2, int a3)
{
  int v6; // r0
  _QWORD v8[11]; // [sp+0h] [bp-90h] BYREF
  int v9; // [sp+58h] [bp-38h]
  int v10; // [sp+5Ch] [bp-34h]

  v6 = sub_608EEFA8(v8);
  *(_BYTE *)(v6 + 20 * v9 + 24) = 1;
  v10 = a2;
  if ( !*(_DWORD *)a1 )
  {
    v8[0] = *(_QWORD *)&dword_60CC5B08;
    *(_DWORD *)a1 = sub_608F01B0(a3, v8);
  }
  if ( !FIELD_U32(a1, 4) )
  {
    v8[0] = *(_QWORD *)&dword_60CC5B10;
    FIELD_U32(a1, 4) = sub_608F01B0(a3, v8);
  }
  if ( !FIELD_U32(a1, 8) )
  {
    v8[0] = *(_QWORD *)&dword_60CC5B18;
    FIELD_U32(a1, 8) = sub_608F01B0(a3, v8);
  }
  if ( !FIELD_U32(a1, 12) )
  {
    v8[0] = *(_QWORD *)&dword_60CC5B20;
    FIELD_U32(a1, 12) = sub_608F01B0(a3, v8);
  }
  if ( !FIELD_U32(a1, 16) )
  {
    v8[0] = *(_QWORD *)&dword_60CC5B28;
    FIELD_U32(a1, 16) = sub_608F01B0(a3, v8);
  }
  if ( !FIELD_U32(a1, 20) )
  {
    v8[0] = *(_QWORD *)&dword_60CC5B30;
    FIELD_U32(a1, 20) = sub_608F01B0(a3, v8);
  }
  if ( !FIELD_U32(a1, 24) )
  {
    v8[0] = *(_QWORD *)&dword_60CC5B38;
    FIELD_U32(a1, 24) = sub_608F01B0(a3, v8);
  }
  if ( !FIELD_U32(a1, 28) )
  {
    v8[0] = *(_QWORD *)&dword_60CC5B40;
    FIELD_U32(a1, 28) = sub_608F01B0(a3, v8);
  }
  if ( !FIELD_U32(a1, 32) )
  {
    v8[0] = *(_QWORD *)&dword_60CC5B48;
    FIELD_U32(a1, 32) = sub_608F01B0(a3, v8);
  }
  FIELD_U8(a1, 36) = 1;
  return 1;
}
