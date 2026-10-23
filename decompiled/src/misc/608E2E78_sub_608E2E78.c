/* sub_608E2E78
 * address: 0x608E2E78   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E2E78(_DWORD *a1, _BYTE *a2, int a3)
{
  int EntryType; // r1
  int result; // r0
  int v8; // [sp+0h] [bp-4h] BYREF
  int (**v9)(); // [sp+4h] [bp+0h] BYREF
  int *v10; // [sp+8h] [bp+4h]
  int v11; // [sp+Ch] [bp+8h]
  int v12; // [sp+10h] [bp+Ch] BYREF

  v10 = &v12;
  v9 = &BufferedSafeStringBase_char_vtable_probably;
  v11 = 256;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v9);
  *(_BYTE *)v10 = 0;
  v9 = &off_60BD94BC;
  if ( !(*(int (__fastcall **)(_DWORD *, int (***)(), int))(*a1 + 124))(a1, &v9, a3) )
  {
    a1[20] = 2560002;
    return 0;
  }
  ((void (__fastcall *)(int (***)()))v9[3])(&v9);
  EntryType = nn__fs__GetEntryType(&v8, v10);
  a1[20] = EntryType;
  if ( !EntryType )
  {
    LOBYTE(result) = v8;
    if ( v8 != 1 )
      LOBYTE(result) = 0;
    goto LABEL_8;
  }
  result = 0;
  if ( (EntryType & 0x3FFFFF) == 0x202 )
  {
LABEL_8:
    *a2 = result;
    return 1;
  }
  return result;
}
