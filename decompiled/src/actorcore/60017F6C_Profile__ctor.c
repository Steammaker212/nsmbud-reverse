/* Profile__ctor
 * address: 0x60017F6C   size: 84   group: actorcore
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall Profile__ctor(
        Profile *this,
        void *buildFunction,
        unsigned int profileId,
        sead__SafeString *name,
        ActorInfo *actorInfo,
        int flags)
{
  ActorInfo *actorInfo_1; // r3
  unsigned int idx; // r1

  FIELD_U32(this, 0x0) = &Profile_vtable;
  actorInfo_1 = actorInfo;
  FIELD_U32(this, 0x4) = buildFunction;
  FIELD_U32(this, 0x8) = profileId;
  if ( !actorInfo )
    actorInfo_1 = &ActorInfo_Default;
  idx = 0;
  FIELD_U32(this, 0xC) = actorInfo_1;
  FIELD_U8(this, 0x10) = 0;
  FIELD_U32(this, 0x14) = flags;
  if ( profileId < 0x392 )
    idx = profileId;
  Profiles[idx] = this;
}
