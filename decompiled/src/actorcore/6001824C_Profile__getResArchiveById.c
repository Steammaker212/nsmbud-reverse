/* Profile__getResArchiveById
 * address: 0x6001824C   size: 80   group: actorcore
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Profile__getResArchiveById(Profile *this, unsigned int id)
{
  int resourceList; // r5

  resourceList = Profile_getResourceListById(FIELD_U32(this, 0x8));
  if ( resourceList && Profile_getResourceCountById(FIELD_U32(this, 0x8)) > id )
    return LoadResource(ResourceMgrRelated_instance, (_DWORD *)(resourceList + 8 * id));
  else
    return 0;
}
