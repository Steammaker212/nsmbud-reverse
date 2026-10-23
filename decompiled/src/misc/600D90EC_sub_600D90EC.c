/* sub_600D90EC
 * address: 0x600D90EC   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600D90EC(int a1)
{
  int (__fastcall *v2)(int, int *); // r2
  int *v3; // r1

  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
  {
    FIELD_U32(a1, 7496) = ((3 * (unsigned __int64)sead__Random__getU32((void *)(dword_60C9CF0C + 1340))) >> 32) + 1;
    FIELD_F32(a1, 100) = (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 1092))(a1);
    v2 = *(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
    if ( FIELD_S32(a1, 7496) < 2 )
      v3 = &dword_60C831DC;
    else
      v3 = &dword_60C83194;
  }
  else
  {
    v2 = *(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
    v3 = (int *)&unk_60C84498;
  }
  return v2(a1, v3);
}
