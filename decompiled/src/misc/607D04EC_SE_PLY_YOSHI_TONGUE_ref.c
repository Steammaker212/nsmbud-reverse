/* SE_PLY_YOSHI_TONGUE_ref
 * address: 0x607D04EC   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_PLY_YOSHI_TONGUE_ref(int a1)
{
  _DWORD *v2; // r0
  int v3; // t1
  int v4; // r0

  FIELD_U32(a1, 1236) |= 0x200000u;
  v3 = FIELD_U32(a1, 11368);
  v2 = (_DWORD *)(a1 + 11368);
  FIELD_U32(v3, 208) |= 0x40u;
  if ( (*(_BYTE *)(v2 - 1117) & 1) != 0 )
    sub_607949A4(a1 + 11364, 102);
  else
    (*(void (__fastcall **)(_DWORD, int, float, float, float))(*(_DWORD *)*v2 + 88))(*v2, 102, 1.4, 10.0, 4.0);
  v4 = sub_607CBC00(a1);
  if ( v4 )
  {
    FIELD_U32(v4, 324) = 1;
    sub_607D60B0();
  }
  FIELD_U32(a1, 11428) = 1;
  return sub_607734E8((unsigned __int8 *)a1, (int)"SE_PLY_YOSHI_TONGUE", 0, 0);
}
