/* sub_605EC6B8
 * address: 0x605EC6B8   size: 524   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_605EC6B8(int a1)
{
  char v2; // r12
  int v3; // r1
  int v4; // r1
  unsigned int result; // r0
  int v6; // r1

  if ( FIELD_S8(a1, 6560) >= 0
    || FIELD_S8(a1, 6561) >= 0
    || FIELD_S8(a1, 6562) >= 0
    || FIELD_S8(a1, 6563) >= 0
    || FIELD_U8(a1, 6603) )
  {
    FIELD_U32(a1, 6584) = 4;
  }
  else if ( FIELD_F32(a1, 100) == 0.0 )
  {
    v6 = FIELD_U32(a1, 6584);
    if ( v6 )
      FIELD_U32(a1, 6584) = v6 - 1;
    else
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 196))(a1);
  }
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v3 = FIELD_U32(a1, 6588);
  if ( v3 )
  {
    v4 = v3 - 1;
    FIELD_U32(a1, 6588) = v4;
    if ( v4 < 2 )
    {
      if ( v4 == 1 )
      {
        FIELD_U32(a1, 6576) = 0;
        FIELD_U32(a1, 6580) = 0;
      }
    }
    else if ( (FIELD_U8(dword_60C99DD4, 1052) & 2) != 0 )
    {
      FIELD_U32(a1, 6576) ^= 1u;
      if ( ((unsigned int)dword_60CB1DE0 & ~(1616824204 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60CB1DE0) )
      {
        dword_60CB1DE0[1] = 0x4000000;
        dword_60CB1DE0[2] = -67108864;
        _cxa_guard_release(dword_60CB1DE0);
      }
      FIELD_U32(a1, 6580) = dword_60CB1DE0[FIELD_U32(a1, 6576) + 1];
    }
  }
  result = FIELD_U16(a1, 6592);
  if ( result <= 0x4F )
  {
    if ( result == 64 )
    {
      FIELD_U32(a1, 100) = -1103101952;
LABEL_20:
      FIELD_U32(a1, 6576) = 0;
      return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60CB1D74);
    }
    if ( FIELD_F32(a1, 100) != 0.0 )
      goto LABEL_20;
    result = FIELD_U8(dword_60C99DD4, 1052);
    if ( (result & 2) != 0 )
    {
      result = FIELD_U32(a1, 6576) ^ 1;
      FIELD_U32(a1, 6576) = result;
    }
  }
  return result;
}
