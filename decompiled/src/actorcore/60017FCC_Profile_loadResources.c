/* Profile_loadResources
 * address: 0x60017FCC   size: 440   group: actorcore
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Profile *__fastcall Profile_loadResources(Profile *this, int a2)
{
  int *ResourceListById; // r6
  int ResourceCountById; // r7
  int i; // r9
  char *v5; // r5
  int v6; // r1
  int j; // r2
  int v8; // r5
  int v9; // r3
  Profile *v10; // [sp+8h] [bp-148h]
  sead__SafeString v12[38]; // [sp+1Ch] [bp-134h] BYREF

  if ( !FIELD_U8(this, 0x10) )
  {
    v10 = this;
    ResourceListById = (int *)Profile_getResourceListById(FIELD_U32(this, 0x8));
    if ( ResourceListById )
    {
      ResourceCountById = Profile_getResourceCountById(FIELD_U32(v10, 0x8));
      if ( ResourceCountById )
      {
        for ( i = 0; i != ResourceCountById; ++i )
        {
          v12[0].vtable = &sead__SafeStringBase__vtable;
          v12[0].cstr = "block_ice";
          (*(void (__fastcall **)(int *))(*ResourceListById + 12))(ResourceListById);
          (*(void (__fastcall **)(int *))(*ResourceListById + 12))(ResourceListById);
          v5 = (char *)ResourceListById[1];
          (*((void (__fastcall **)(sead__SafeString *))v12[0].vtable + 3))(v12);
          if ( v5 != v12[0].cstr )
          {
            v6 = ResourceListById[1];
            for ( j = 1; *(unsigned __int8 *)(v6 + j - 1) == (unsigned __int8)v12[0].cstr[j - 1]; j += 2 )
            {
              if ( !*(_BYTE *)(v6 + j - 1) )
                goto LABEL_15;
              if ( j > 0x80000 || *(unsigned __int8 *)(v6 + j) != (unsigned __int8)v12[0].cstr[j] )
                break;
              if ( !*(_BYTE *)(v6 + j) )
                goto LABEL_15;
            }
            v8 = ArchiveManagerMaybe_instance;
            (*(void (__fastcall **)(int *))(*ResourceListById + 12))(ResourceListById);
            sead_SomeString_sprtintf(v12, (int)"Model/%s.Nin_NX_NVN.szs", ResourceListById[1], v9);
            ArchiveManager_loadSzs(v8, (sead__SafeString *)ResourceListById, v12, (void *)a2, 1);
            sub_6043B2D8(ResourceMgrRelated_instance, ResourceListById, (int)ResourceListById, (void *)a2);
          }
LABEL_15:
          ResourceListById += 2;
        }
      }
    }
    FIELD_U8(v10, 0x10) = 1;
    return (Profile *)1;
  }
  return this;
}
