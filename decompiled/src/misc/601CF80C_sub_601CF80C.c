/* sub_601CF80C
 * address: 0x601CF80C   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_601CF80C(int a1)
{
  _DWORD *v2; // r5
  char v3; // r12
  _DWORD *v4; // r4
  char v5; // r12

  v2 = (_DWORD *)ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 20));
  if ( ((unsigned int)&dword_60C88AB0 & ~(1612511300 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C88AB0) )
  {
    dword_60C88AAC = (int)&off_60BD4BBC;
    _cxa_guard_release(&dword_60C88AB0);
  }
  if ( v2 && (*(int (__fastcall **)(_DWORD *, int *))*v2)(v2, &dword_60C88AAC) == 1 )
  {
    do
    {
      (*(void (__fastcall **)(_DWORD *))(*v2 + 88))(v2);
      v2 = (_DWORD *)v2[68];
    }
    while ( v2 );
  }
  v4 = (_DWORD *)ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 20));
  if ( ((unsigned int)&dword_60C88AB0 & ~(1612511484 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C88AB0) )
  {
    dword_60C88AAC = (int)&off_60BD4BBC;
    _cxa_guard_release(&dword_60C88AB0);
  }
  if ( v4 && (*(int (__fastcall **)(_DWORD *, int *))*v4)(v4, &dword_60C88AAC) == 1 )
  {
    do
    {
      (*(void (__fastcall **)(_DWORD *))(*v4 + 84))(v4);
      v4 = (_DWORD *)v4[68];
    }
    while ( v4 );
  }
}
