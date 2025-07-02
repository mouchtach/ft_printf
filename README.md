<!DOCTYPE html>
<html>
<body>
<h1>ft_printf</h1>
<p>A custom implementation of printf for 42 School projects.</p>

<div class="box">
<h2 class="box-title">Table of Contents</h2>
<div class="toc">
<ul>
<li><a href="#features">Features</a></li>
<li><a href="#conversions">Supported Conversions</a></li>
<li><a href="#installation">Installation</a></li>
<li><a href="#usage">Usage</a></li>
<li><a href="#examples">Examples</a></li>
<li><a href="#testing">Testing</a></li>
</ul>
</div>
</div>

<h2 id="features">Features</h2>
<ul>
<li>Implements standard printf conversions: <code>%c</code>, <code>%s</code>, <code>%p</code>, <code>%d</code>, <code>%i</code>, <code>%u</code>, <code>%x</code>, <code>%X</code>, <code>%%</code></li>
<li>Supports flags: <code>-</code>, <code>0</code>, <code>#</code>, <code> </code>, <code>+</code></li>
<li>Handles width and precision specifications</li>
<li>Bonus: Implements <code>%n</code> conversion</li>
</ul>

<h2 id="conversions">Supported Conversions</h2>
<table>
<thead>
<tr>
<th>Specifier</th>
<th>Description</th>
<th>Example</th>
</tr>
</thead>
<tbody>
<tr>
<td><code>%c</code></td>
<td>Character</td>
<td><code>A</code></td>
</tr>
<tr>
<td><code>%s</code></td>
<td>String</td>
<td><code>hello</code></td>
</tr>
<tr>
<td><code>%p</code></td>
<td>Pointer address</td>
<td><code>0x7ffeeb39b7d0</code></td>
</tr>
<tr>
<td><code>%d</code>/<code>%i</code></td>
<td>Signed integer</td>
<td><code>-42</code></td>
</tr>
<tr>
<td><code>%u</code></td>
<td>Unsigned integer</td>
<td><code>42</code></td>
</tr>
<tr>
<td><code>%x</code></td>
<td>Hexadecimal (lowercase)</td>
<td><code>2a</code></td>
</tr>
<tr>
<td><code>%X</code></td>
<td>Hexadecimal (uppercase)</td>
<td><code>2A</code></td>
</tr>
<tr>
<td><code>%%</code></td>
<td>Percent sign</td>
<td><code>%</code></td>
</tr>
<tr>
<td><code>%n</code></td>
<td>Count of chars written</td>
<td><em>(no output)</em></td>
</tr>
</tbody>
</table>

<h2 id="installation">Installation</h2>
<pre><code>git clone https://github.com/mouchtach/ft_printf.git &amp;&amp; cd ft_printf &amp;&amp; make</code></pre>

<h2 id="usage">Usage</h2>
<ol>
<li>Include the header:
<pre><code>#include "ft_printf.h"</code></pre>
</li>
<li>Compile with:
<pre><code>gcc your_file.c -L. -lftprintf -o your_program</code></pre>
</li>
</ol>

<h2 id="examples">Examples</h2>
<div class="box">
<div class="box-title">Basic Formatting</div>
<pre><code>ft_printf("String: %s, Number: %d", "hello", 42);</code></pre>
</div>

<div class="box">
<div class="box-title">With Flags</div>
<pre><code>ft_printf("Hex: %#x, Padded: %05d", 42, 42);</code></pre>
</div>

<h2 id="testing">Testing</h2>
<pre><code>make test</code></pre>
<p>Or use 42's francinette:</p>
<pre><code>fcinette --printf</code></pre>
</body>
</html>
