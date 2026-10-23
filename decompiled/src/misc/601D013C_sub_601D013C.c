/* sub_601D013C
 * address: 0x601D013C   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601D013C(int a1)
{
  _DWORD *v1; // r4
  char v2; // r12
  int v3; // r5
  int v4; // r0

  v1 = (_DWORD *)ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 20));
  if ( ((unsigned int)&dword_60C88AB0 & ~(1612513652 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C88AB0) )
  {
    dword_60C88AAC = (int)&off_60BD4BBC;
    _cxa_guard_release(&dword_60C88AB0);
  }
  v3 = 0;
  if ( v1 && (*(int (__fastcall **)(_DWORD *, int *))*v1)(v1, &dword_60C88AAC) == 1 )
  {
    v3 = 0;
    do
    {
      v4 = (*(int (__fastcall **)(_DWORD *))(*v1 + 92))(v1);
      v1 = (_DWORD *)v1[68];
      if ( v4 )
        ++v3;
    }
    while ( v1 );
  }
  return v3;
}
