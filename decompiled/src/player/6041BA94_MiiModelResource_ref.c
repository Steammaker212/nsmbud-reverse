/* MiiModelResource_ref
 * address: 0x6041BA94   size: 324   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall MiiModelResource_ref(_DWORD *a1, int a2, void *a3)
{
  int result; // r0
  int *v6; // r6
  int v7; // r0
  int v8; // r0
  int v9; // r2
  int v10; // r0
  int v11; // r1
  int (**v12)(); // [sp+8h] [bp-20h] BYREF
  const char *v13; // [sp+Ch] [bp-1Ch]

  a1[1160] = a1;
  a1[1161] = a2;
  if ( ResourceMgrRelated_instance )
  {
    v12 = &sead__SafeStringBase__vtable;
    v13 = "Mii";
    result = LoadResource(ResourceMgrRelated_instance, &v12);
    a1[17] = result;
    v6 = a1 + 17;
    if ( result )
      return result;
  }
  else
  {
    v6 = a1 + 17;
    result = a1[17];
    if ( result )
      return result;
  }
  v7 = operator_new_8DE25C(0x208u, a3, 4);
  v8 = sub_60439BC8(v7);
  *v6 = v8;
  FIELD_U32(v8, 224) = a1 + 1159;
  v12 = &sead__SafeStringBase__vtable;
  v13 = "Mii";
  v9 = sub_60822808(ArchiveManagerMaybe_instance);
  v10 = a1[17];
  v11 = a1[18];
  v12 = &sead__SafeStringBase__vtable;
  v13 = "MiiModelResource";
  ((void (__fastcall *)(int, int, int, int (***)(), _DWORD, void *))sub_60439F70)(v10, v11, v9, &v12, 0, a3);
  result = ResourceMgrRelated_instance;
  if ( ResourceMgrRelated_instance )
  {
    v12 = &sead__SafeStringBase__vtable;
    v13 = "Mii";
    return sub_6043C684(ResourceMgrRelated_instance, &v12, *v6, a3);
  }
  return result;
}
