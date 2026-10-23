/* Default_ref
 * address: 0x60915C40   size: 664   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Default_ref(int a1)
{
  int v2; // r0
  int v3; // r6
  int v4; // r0
  int v5; // r8
  int v6; // r1
  bool v7; // cc
  int v8; // r9
  signed int v9; // r5
  signed int v10; // r0

  sub_60915AF0((_DWORD *)a1);
  *(_DWORD *)a1 = off_60C5D574;
  v2 = dword_60CCF464;
  FIELD_U32(a1, 28) = FIELD_U32(dword_60CCF464, 24);
  FIELD_U32(a1, 32) = FIELD_U32(v2, 28);
  FIELD_U32(a1, 36) = FIELD_U32(v2, 32);
  FIELD_U32(a1, 40) = 1624193;
  sead__CriticalSection__ctor((sead_IDisposer *)(a1 + 44));
  sead__CriticalSection__ctor((sead_IDisposer *)(a1 + 80));
  sead__CriticalSection__ctor((sead_IDisposer *)(a1 + 116));
  sead__CriticalSection__ctor((sead_IDisposer *)(a1 + 152));
  v3 = 0;
  FIELD_U32(a1, 188) = 0;
  FIELD_U32(a1, 192) = 0;
  FIELD_U16(a1, 216) = 0;
  FIELD_U16(a1, 214) = 0;
  FIELD_U16(a1, 212) = 0;
  FIELD_U16(a1, 210) = 0;
  FIELD_U16(a1, 208) = 0;
  FIELD_U16(a1, 206) = 0;
  FIELD_U16(a1, 204) = 0;
  FIELD_U16(a1, 202) = 0;
  FIELD_U16(a1, 200) = 0;
  FIELD_U16(a1, 198) = 0;
  FIELD_U16(a1, 218) = 0;
  FIELD_U32(a1, 224) = 0;
  FIELD_U16(a1, 228) = 0;
  FIELD_U32(a1, 232) = 0;
  untitled_ref(a1 + 240);
  FIELD_U32(a1, 824) = 0;
  FIELD_U32(a1, 828) = 0;
  FIELD_U32(a1, 832) = 0;
  FIELD_U32(a1, 836) = 0;
  FIELD_U32(a1, 840) = 0;
  FIELD_U32(a1, 844) = 0;
  FIELD_U32(a1, 852) = a1;
  FIELD_U32(a1, 856) = nullsub_5638;
  FIELD_U32(a1, 860) = 0;
  FIELD_U32(a1, 848) = off_60C5D590;
  FIELD_U32(a1, 868) = a1 + 876;
  FIELD_U32(a1, 864) = &BufferedSafeStringBase_char_vtable_probably;
  FIELD_U32(a1, 872) = 64;
  sead__BufferedSafeStringBase__assureTerminationImpl_const(a1 + 864);
  **(_BYTE **)(a1 + 868) = 0;
  FIELD_U32(a1, 864) = &off_60BD4BF0;
  FIELD_U32(a1, 948) = 0;
  FIELD_U32(a1, 944) = 0;
  FIELD_U32(a1, 956) = 0;
  FIELD_U32(a1, 952) = 0;
  FIELD_U32(a1, 964) = 0;
  FIELD_U32(a1, 960) = 0;
  FIELD_U32(a1, 968) = 1048592;
  v4 = dword_60CCF464;
  FIELD_U32(a1, 24) = FIELD_U32(dword_60CCF464, 36);
  FIELD_U32(v4, 360) = a1 + 848;
  FIELD_U32(a1, 828) = 0;
  FIELD_U32(a1, 832) = 0;
  FIELD_U32(a1, 836) = 0;
  FIELD_U32(a1, 840) = 0;
  FIELD_U32(a1, 844) = 0;
  v5 = FIELD_U32(a1, 868);
  (*(void (__fastcall **)(int))(FIELD_U32(a1, 864) + 12))(a1 + 864);
  v6 = FIELD_U32(a1, 868);
  while ( *(_BYTE *)(v6 + v3) )
  {
    if ( !*(_BYTE *)(v6 + v3 + 1) )
    {
      ++v3;
      break;
    }
    if ( !*(_BYTE *)(v6 + v3 + 2) )
    {
      v3 += 2;
      break;
    }
    v7 = v3 + 2 <= 0x7FFFF;
    v3 += 3;
    if ( !v7 )
    {
      v3 = 0;
      break;
    }
  }
  v8 = 0;
  v9 = 0;
  if ( v3 > 0 )
    v8 = v3;
  while ( aDefault[v9] )
  {
    if ( v9 > 0x7FFFF )
    {
      v9 = 0;
      break;
    }
    if ( !aDefault[v9 + 1] )
    {
      ++v9;
      break;
    }
    v9 += 2;
  }
  v10 = FIELD_U32(a1, 872) - v8;
  if ( v9 >= v10 )
    v9 = v10 - 1;
  if ( v9 >= 1 )
  {
    qmemcpy((void *)(v5 + v8), "Default", v9);
    if ( v9 + v8 > v3 )
      *(_BYTE *)(v5 + v9 + v8) = 0;
  }
  return a1;
}
