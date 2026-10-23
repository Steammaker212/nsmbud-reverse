/* PlayerMgr_hasPlayer
 * address: 0x60789D20   size: 156   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall PlayerMgr_hasPlayer(int a1, unsigned int a2)
{
  int v2; // r4
  int v3; // r5

  v2 = 0;
  if ( (FIELD_U16(a1, 66) & (unsigned __int16)(1 << a2)) == 0 )
    return v2;
  if ( a2 >= 4 )
    a2 = 0;
  v3 = *(_DWORD *)(a1 + 4 * a2 + 32);
  if ( !v3 )
    return v2;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 636))(v3) != 1 )
    return 1;
  if ( (*(int (__fastcall **)(int, int))(*(_DWORD *)v3 + 640))(v3, 3) )
    return v2;
  if ( !(*(int (__fastcall **)(int, int))(*(_DWORD *)v3 + 640))(v3, 5) )
    return 1;
  return v2;
}
