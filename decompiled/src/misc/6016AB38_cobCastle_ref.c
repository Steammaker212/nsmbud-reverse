/* cobCastle_ref
 * address: 0x6016AB38   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall cobCastle_ref(int a1)
{
  int v2; // r1
  int *v3; // r10
  signed int result; // r0
  void **v5; // r0
  sead__SafeString *v6; // r9
  void *v7; // r8
  sead__SafeString *p_cstr; // r6
  char *vtable; // r0
  int i; // r2
  int v11; // r0
  _DWORD v12[10]; // [sp+8h] [bp-28h] BYREF

  if ( FIELD_U8(a1, 1704) )
  {
    v2 = 0;
    FIELD_U8(a1, 1704) = 0;
    FIELD_U32(a1, 1700) = 0;
    v3 = (int *)(a1 + 1700);
  }
  else
  {
    v3 = (int *)(a1 + 1700);
    v2 = FIELD_U32(a1, 1700);
  }
  result = 0;
  if ( v2 >= 0 && v2 < FIELD_U32(a1, 16) )
  {
    v5 = (void **)(a1 + 1716);
    v6 = *(sead__SafeString **)(FIELD_U32(a1, 24) + 4 * v2);
    if ( !v6->vtable )
      v5 = (void **)(a1 + 1712);
    v7 = *v5;
    p_cstr = (sead__SafeString *)&v6->cstr;
    (*((void (__fastcall **)(char **))v6->cstr + 3))(&v6->cstr);
    (*((void (__fastcall **)(sead__SafeString *))p_cstr->vtable + 3))(p_cstr);
    vtable = (char *)v6[1].vtable;
    if ( vtable == "pack" )
    {
LABEL_14:
      v12[0] = &sead__SafeStringBase__vtable;
      v12[1] = "cobCastle";
      if ( !sub_608217C4(ArchiveManagerMaybe_instance, v12) )
        ArchiveManagerMaybe_loadPack(ArchiveManagerMaybe_instance, (int)&v6[6], (int)v7);
    }
    else
    {
      for ( i = 0; i <= 0x80000; ++i )
      {
        if ( vtable[i] != aPack[i] )
          break;
        if ( !vtable[i] )
          goto LABEL_14;
      }
      ArchiveManager_loadSzs(ArchiveManagerMaybe_instance, p_cstr, v6 + 6, v7, 1);
    }
    if ( FIELD_U8(a1, 1704) )
    {
      v11 = 0;
      FIELD_U8(a1, 1704) = 0;
    }
    else
    {
      v11 = *v3 + 1;
    }
    *v3 = v11;
    return 1;
  }
  return result;
}
