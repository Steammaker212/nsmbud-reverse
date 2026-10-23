/* sub_6076357C
 * address: 0x6076357C   size: 400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6076357C(int a1)
{
  _BYTE *v2; // r0
  int v3; // t1
  int v4; // r0

  v3 = FIELD_U8(a1, 7072);
  v2 = (_BYTE *)(a1 + 7072);
  if ( !v3 )
    return 0;
  *v2 = 0;
  v4 = FIELD_U32(a1, 7076);
  switch ( v4 )
  {
    case 7:
      if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 236))(a1) != 1
        || !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 240))(a1) )
      {
        return (*(int (__fastcall **)(int, _DWORD, int))(*(_DWORD *)a1 + 1180))(a1, 0, 15);
      }
      return 0;
    case 9:
      if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 236))(a1) != 1
        || !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 240))(a1) )
      {
        return (*(int (__fastcall **)(int, _DWORD, int))(*(_DWORD *)a1 + 1180))(a1, 0, 14);
      }
      return 0;
    case 8:
      if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 236))(a1) != 1
        || !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 240))(a1) )
      {
        return (*(int (__fastcall **)(int, _DWORD, int))(*(_DWORD *)a1 + 1180))(a1, 0, 10);
      }
      return 0;
  }
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 236))(a1) == 1
    && !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1204))(a1)
    && (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 240))(a1) )
  {
    return 0;
  }
  return (*(int (__fastcall **)(int, _DWORD, int))(*(_DWORD *)a1 + 1168))(a1, 0, 1);
}
