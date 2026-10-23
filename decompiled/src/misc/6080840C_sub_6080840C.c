/* sub_6080840C
 * address: 0x6080840C   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6080840C(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  _DWORD *v9; // r5
  int v10; // r9
  int v11; // r4
  int v12; // r0
  int v13; // r6
  int v14; // r0
  int v15; // r0
  int ItemId_const; // r0
  _DWORD v18[10]; // [sp+0h] [bp-28h] BYREF

  v9 = a1 + 14;
  v10 = (*(int (__fastcall **)(_DWORD *, _DWORD *, int))(*a1 + 32))(a1, a1 + 14, a2);
  if ( v10 == 1 )
    sub_60808570(1, v9, a4);
  v11 = SoundSystem_instance;
  v12 = sub_60805BA8(SoundSystem_instance);
  v13 = sub_608DC930(FIELD_U32(v12, 456));
  v14 = sub_60805BA8(v11);
  v15 = sub_608DC930(FIELD_U32(v14, 456));
  ItemId_const = nn__atk__SoundArchive__GetItemId_const(v15, a2);
  if ( sub_608A9B50(v13, ItemId_const) == 1 )
  {
    sub_608A8604(v18, v9);
    if ( v18[0] )
      sub_608B7318(v18[0], 0, a3);
    sub_608A86F0(v18);
  }
  if ( (unsigned int)(a5 - 0x100000) < 2 || a5 == 1 )
  {
    if ( *v9 )
    {
      sub_608B0390(*v9, 0);
      if ( *v9 )
        sub_608B0444(*v9, 0, 1.0);
    }
  }
  else
  {
    sub_60807574(a1);
  }
  return v10;
}
