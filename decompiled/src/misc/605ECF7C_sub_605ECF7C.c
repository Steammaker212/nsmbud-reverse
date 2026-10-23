/* sub_605ECF7C
 * address: 0x605ECF7C   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_605ECF7C(_DWORD *a1, Vec3 *a2, int a3, char a4)
{
  _BYTE *v8; // r6
  char v9; // r12
  int v10; // r1
  int v11; // r2
  ActorBuildInfo v12; // [sp+4h] [bp-44h] BYREF

  memset(&v12.settings2, 0, 36);
  v12.settings1 = a1[4];
  v12.profile = Profile__get(0x1B5u);
  v12.position = *a2;
  v12.field_20 = 0;
  v12.movementId = 0;
  v12.linkId = a4;
  v12.eventId1 = 0;
  v12.eventId2 = 0;
  v12.field_28 = 0;
  v8 = ActorMgr__create((void *)ActorMgr__instance, &v12, 1);
  if ( ((unsigned int)&dword_60CB1E08 & ~(1616826400 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60CB1E08) )
  {
    dword_60CB1E04 = (int)&off_60BD48EC;
    _cxa_guard_release(&dword_60CB1E08);
  }
  if ( v8 && (**(int (__fastcall ***)(_BYTE *, int *))v8)(v8, &dword_60CB1E04) == 1 )
  {
    if ( a3 == 1 )
    {
      v10 = a1[1];
      v11 = a1[2];
      *((_DWORD *)v8 + 27) = *a1;
      *((_DWORD *)v8 + 28) = v10;
      *((_DWORD *)v8 + 29) = v11;
      v8[7481] = 1;
    }
    else
    {
      a1[3] = *((_DWORD *)v8 + 2);
    }
  }
}
