/* sub_60477FD8
 * address: 0x60477FD8   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60477FD8(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0

  sub_608535AC();
  if ( (FIELD_U8(a1, 8) & 0x10) != 0 )
  {
    v2 = FIELD_U32(a1, 128);
    if ( v2 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 104))(v2);
    v3 = FIELD_U32(a1, 112);
    if ( v3 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 104))(v3);
    v4 = FIELD_U32(a1, 116);
    if ( v4 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 108))(v4);
    v5 = FIELD_U32(a1, 120);
    if ( v5 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 104))(v5);
    v6 = FIELD_U32(a1, 124);
    if ( v6 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 108))(v6);
    sub_60477B30((_DWORD *)a1, FIELD_U32(a1, 128));
  }
  FIELD_U8(a1, 160) = 0;
  return 0;
}
