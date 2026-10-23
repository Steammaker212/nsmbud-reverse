/* ColliderBase_setType
 * address: 0x60160490   size: 100   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ColliderBase_setType(ColliderBase *this, int type)
{
  int currentTpye; // r0
  char *v4; // r5
  int v5; // r6

  currentTpye = FIELD_U32(this, 0x12C);
  if ( currentTpye != type )
  {
    FIELD_U32(this, 0x12C) = type;
    v4 = &byte_60AF77B8[8 * type];
    v5 = *(_DWORD *)v4;
    (*(void (__fastcall **)(ColliderBase *, char *))(FIELD_U32(this, 0x0) + 0x38))(this, v4);
    sub_60153898(ColliderMgr_instance, this, (__int64 *)&FIELD_U32(this, 0x130), v4);
    currentTpye = *((_DWORD *)v4 + 1);
    FIELD_U32(this, 0x130) = v5;
    FIELD_U32(this, 0x134) = currentTpye;
  }
  return currentTpye;
}
