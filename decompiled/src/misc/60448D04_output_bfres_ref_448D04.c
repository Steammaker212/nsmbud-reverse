/* output_bfres_ref_448D04
 * address: 0x60448D04   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall output_bfres_ref_448D04(_DWORD *a1, void (__fastcall ***a2)(const char **), int a3, _DWORD *a4, int a5)
{
  nn__util__BinaryFileHeader *v9; // r0
  int Resource; // r6
  int v11; // r7
  int v12; // r0
  int result; // r0
  _DWORD v14[8]; // [sp+0h] [bp-20h] BYREF

  v14[0] = &sead__SafeStringBase__vtable;
  v14[1] = "output.bfres";
  v9 = (nn__util__BinaryFileHeader *)sub_608226EC(ArchiveManagerMaybe_instance, a1, v14, 0);
  *a4 = sub_6086EDAC(v9);
  sub_6090B310(dword_60CCF464);
  Resource = LoadResource(ResourceMgrRelated_instance, a1);
  v11 = FIELD_U32(Resource, 20);
  (*a2)[3]((const char **)a2);
  sub_609183B4(v11, (const char *)a2[1]);
  v12 = sub_609184C4(FIELD_U32(Resource, 20));
  sub_60959954(a3, v12);
  sub_6090B32C(dword_60CCF464);
  result = a5;
  if ( a5 )
    return sub_60920EC8(a5, a3);
  return result;
}
